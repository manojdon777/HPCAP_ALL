#include<stdio.h>
#include<stdlib.h>
#include<cuda.h>
#include<sys/time.h>
 #define VECTORSIZE 12
 __global__ void vector_addition(int *A, int *B, int *C, int n) {
    int i = blockIdx.x * blockDim.x + threadIdx.x;
    if (i < n) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += A[i * n + j] * B[j];
        }
        C[i] = sum;
    }
}
 int main() {
    int *A, *B, *C;
    int n = VECTORSIZE * VECTORSIZE;
    size_t size = n * sizeof(int);
     A = (int *)malloc(size);
    B = (int *)malloc(VECTORSIZE * sizeof(int));
    C = (int *)malloc(VECTORSIZE * sizeof(int));
     // Initialize data
    for (int i = 0; i < n; i++) {
        A[i] = 1;
    }
    for (int i = 0; i < VECTORSIZE; i++) {
        B[i] = 1;
    }
     // Allocate device memory
    int *d_A, *d_B, *d_C;
    cudaMalloc((void **)&d_A, size);
    cudaMalloc((void **)&d_B, VECTORSIZE * sizeof(int));
    cudaMalloc((void **)&d_C, VECTORSIZE * sizeof(int));
     // Copy data to device memory
    cudaMemcpy(d_A, A, size, cudaMemcpyHostToDevice);
    cudaMemcpy(d_B, B, VECTORSIZE * sizeof(int), cudaMemcpyHostToDevice);
     // Launch kernel
    int threads_per_block = 256;
    int blocks_per_grid = (n + threads_per_block - 1) / threads_per_block;
    struct timeval start_time, stop_time;
    gettimeofday(&start_time, NULL);
    vector_addition<<<blocks_per_grid, threads_per_block>>>(d_A, d_B, d_C, VECTORSIZE);
    cudaDeviceSynchronize();
    gettimeofday(&stop_time, NULL);
     // Copy result back to host memory
    cudaMemcpy(C, d_C, VECTORSIZE * sizeof(int), cudaMemcpyDeviceToHost);
     // Print result and execution time
    printf("\nVector addition output: \n");
    for (int i = 0; i < VECTORSIZE; i++) {
        printf("\t%d", C[i]);
    }
    double exe_time = (stop_time.tv_sec + (stop_time.tv_usec / 1000000.0)) - (start_time.tv_sec + (start_time.tv_usec / 1000000.0));
    printf("\n Execution time is = %lf seconds\n", exe_time);
     // Free memory
    free(A);
    free(B);
    free(C);
    cudaFree(d_A);
    cudaFree(d_B);
    cudaFree(d_C);
     return 0;
}