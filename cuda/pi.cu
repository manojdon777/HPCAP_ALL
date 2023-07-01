#include<stdio.h>
#include<stdlib.h>
#define N 900000000

_global__ void arradd(double *sum)
{
        int myid = blockIdx.x*blockDim.x + threadIdx.x;
        step = 1.0/(double)N;
        x = (myid)*step;
        sum[myid] =4.0/(1.0+x*x);
}

int main(){
        double *sum, ;
        step = 1.0/(double)N;
        cudaMalloc(&pi, size);
        cudaMemcpy(&stepd, step, size, cudaMemcpyHostToDevice);
        dim3   DimGrid(1, 1);
        dim3   DimBlock(N, 1);
        arradd<<< DimGrid,DimBlock >>>(x, step, pid);
        cudaMemcpy(p, pd, size, cudaMemcpyDeviceToHost);



        pi = step*sum;
        if(myid==0)
                printf("Pi = %f and time taken = %f\n", pi, total_time);
        return 0;
}