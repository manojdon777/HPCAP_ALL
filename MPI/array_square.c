#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<sys/time.h>
#include"mpi.h"

#define N 10

int main(int argc, char **argv)
{
	int i, j;
	int *A, *B;
	double exe_time;
	int myid, size;
	struct timeval stop_time, start_time;
	MPI_Init(&argc,&argv);
	MPI_Comm_size(MPI_COMM_WORLD, &size);
	MPI_Comm_rank(MPI_COMM_WORLD, &myid);
	A = (int *) malloc(N*sizeof(int));
	B = (int *) malloc(N/size);
	if(myid == 0){
		for(i=0;i<N;i++)
		{
			A[i] = i;
		}
		printf("\n Initial Array :\n");
		for(i=0;i<N;i++)
		{
			printf(" %d", A[i]);
		}
		printf("\n");
	}
	gettimeofday(&start_time, NULL);
	MPI_Scatter(A, N/size, MPI_INT, B, N/size, MPI_INT, 0, MPI_COMM_WORLD);
	for(i=0;i<N/size;i++)
	{
		B[i] = B[i] * B[i];
	}
	MPI_Gather(B, N/size, MPI_INT, A, N/size, MPI_INT, 0, MPI_COMM_WORLD);
	gettimeofday(&stop_time, NULL);	
	exe_time = (stop_time.tv_sec+(stop_time.tv_usec/1000000.0)) - (start_time.tv_sec+(start_time.tv_usec/1000000.0));
	if(myid == 0){
		printf("\n Final Array :\n");
		for(i=0;i<N;i++)
		{
			printf(" %d", A[i]);
		}
		printf("\n");
	}
	free(A);
	free(B);
	MPI_Finalize();
}

