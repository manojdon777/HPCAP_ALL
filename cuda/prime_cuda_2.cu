#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>
#define N 1000000

#define THDS_PER_BLK 256
__global__ void sum_reduce(int *arr, int *sum)
{
    int myid = blockIdx.x*blockDim.x + threadIdx.x;	
	int range = THDS_PER_BLK/2;
	__shared__ int tmp[THDS_PER_BLK];
	tmp[threadIdx.x] = 0;
    if(myid<N)
    {
        tmp[threadIdx.x] = arr[myid];
        __syncthreads();
        while(range>0)
        {
            if(threadIdx.x < range)
            {
                tmp[threadIdx.x] += tmp[threadIdx.x + range];
            }
            range = range /2;
            __syncthreads(); 
        }
        if(threadIdx.x == 0)
        {
            sum[blockIdx.x] = tmp[threadIdx.x]; 
        }
    }
}

__global__ void prime_calc(int *sum)
{
	int myid = blockIdx.x*blockDim.x + threadIdx.x;	
	int i,j, flag;
	flag = 1;
	i = myid;
	if((myid<N) && (myid>2))
	{
		for(j=2;j<i;j++)	
	    {
		    if((i%j) == 0)
		    {
			    flag = 0;
			    break;
		    }
	    }
	    sum[myid] = flag;
    }
}

int main()
{
	int *sum, *sum_d, *sum_small_d;
	int i=0;
	int total = 1;
	double exe_time;
	struct timeval stop_time, start_time;
    
    int thds_per_block = THDS_PER_BLK;
	int num_blocks = (N/thds_per_block)+1;
	
	sum = (int *)malloc(N*sizeof(int));
	
	cudaMalloc(&sum_d, N*sizeof(int));
	cudaMalloc(&sum_small_d, num_blocks*sizeof(int));
	
	gettimeofday(&start_time, NULL);	
	
	prime_calc<<< num_blocks,thds_per_block >>>(sum_d);
	cudaDeviceSynchronize();
	
	sum_reduce<<< num_blocks,thds_per_block >>>(sum_d, sum_small_d);
	cudaMemcpy(sum, sum_small_d, num_blocks*sizeof(int), cudaMemcpyDeviceToHost);
	
	for(i=0; i<num_blocks; i++)
	{
        total += sum[i];
    }
    
    gettimeofday(&stop_time, NULL);	
	exe_time = (stop_time.tv_sec+(stop_time.tv_usec/1000000.0)) - (start_time.tv_sec+(start_time.tv_usec/1000000.0));
	    
    printf("\n prime numbers = %d and exe_time = %lf\n", total, exe_time);	
    cudaFree(sum_d); 
    free(sum);
}
