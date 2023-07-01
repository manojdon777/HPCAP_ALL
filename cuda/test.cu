#include<stdio.h>
#include<stdlib.h>
__global__ void arradd(int* md, int* nd, int* pd)
{
	int myid = threadIdx.x;

	pd[myid] = md[myid] + nd[myid];
}
#define ARRSIZE 100000
int main()
{
	int size = ARRSIZE * sizeof(int);
	int m[ARRSIZE], n[ARRSIZE], p[ARRSIZE],*md, *nd,*pd;
	int i=0;  
	for(i=0; i<ARRSIZE; i++ )
	{
		m[i] = i;
		n[i] = i;
		p[i] = 0;
	}  
	cudaMalloc(&md, size);
	cudaMemcpy(md, m, size, cudaMemcpyHostToDevice);
	cudaMalloc(&nd, size);
	cudaMemcpy(nd, n, size, cudaMemcpyHostToDevice);
	cudaMalloc(&pd, size);
	dim3   DimGrid(1, 1);
	dim3   DimBlock(ARRSIZE, 1);
	arradd<<< DimGrid,DimBlock >>>(md,nd,pd);
	cudaMemcpy(p, pd, size, cudaMemcpyDeviceToHost);
	for(i=0; i<ARRSIZE; i++ )
	{
		printf("\t%d",p[i]);
	}
	printf("\n");
	cudaFree(md);
	cudaFree(nd);
	cudaFree(pd);
}