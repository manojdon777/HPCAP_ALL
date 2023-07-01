#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<omp.h>
/*
                N  PRIME_NUMBER

                1           0
               10           4
              100          25
            1,000         168
           10,000       1,229
          100,000       9,592
        1,000,000      78,498
       10,000,000     664,579
      100,000,000   5,761,455
    1,000,000,000  50,847,534

*/

#define N 1000
__global__ void arradd(int *countd)
{
	// int myid = threadIdx.x;
	int myid = blockIdx.x * blockDim.x + threadIdx.x;
	int flag = 1;
	if(myid>2 && myid<N)
	{
		flag = 0;
		for(int j=2;j<myid;j++)
		{
			if((myid%j) == 0)
			{
				countd[myid] = 0;
				break;
			}
		}
		if(flag == 0)
		{
			countd[myid] = 1;
		}
	}
}
int main()
{
	int *countd, count[N];
	int counter = 0;
	cudaMalloc(&countd, N*sizeof(int));	
	// cudaMemcpy(countd, count, N*sizeof(int), cudaMemcpyHostToDevice);
	dim3   DimGrid(1, 1);
	dim3   DimBlock(N, 1);
	arradd<<< DimGrid,DimBlock >>>(countd);
	cudaMemcpy(count, countd, sizeof(int), cudaMemcpyDeviceToHost);
	for(int i = 0; i<N; i++)
		if(count[i] == 1)
			counter++;
	printf("Number of primes: %d.\n", counter);
	return 0;
}