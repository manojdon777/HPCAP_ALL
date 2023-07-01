#include<stdio.h>
#include<stdlib.h>

__device__ int calc_square(int val)
{
	int val_square;
	val_square = val*val;
	return val_square;
}
__global__ void arr_init(int *a){
	int myid = threadIdx.x;
	a[myid] = myid;
}
__global__ void arr_square(int *a){
	int myid = threadIdx.x;
	a[myid] = calc_square(a[myid]);
}
int main()
{
	int size = 400 * sizeof(int);
	int a[400], aa[400];
	int *ad, *aad;
	int i=0;
	
	cudaMalloc(&ad, size);
	cudaMemcpy(ad, a, size, cudaMemcpyHostToDevice);
	cudaMalloc(&aad, size);
	cudaMemcpy(ad, a, size, cudaMemcpyHostToDevice);
	dim3 DimGrid(1, 1);
	dim3 DimBlock(400, 1);
	arr_init<<< DimGrid, DimBlock >>>(ad);
	cudaMemcpy(a,ad,size, cudaMemcpyDeviceToHost);
	arr_square<<< DimGrid,DimBlock >>>(aad);
	cudaMemcpy(aa, aad, size, cudaMemcpyDeviceToHost);
	// Add two vectors
	// for(i=0; i<400; i++ )
	// {
	// 	aa[i] = calc_square(a[i]);
	// }

	// print the output
	for(i=0; i<400; i++ )
	{
		printf("\t%d",aa[i]);
	}
}
