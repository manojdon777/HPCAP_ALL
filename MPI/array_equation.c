#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<sys/time.h>
#include"mpi.h"

#define N 10

int main(int argc, char **argv){
	int i, j;
	double *c, *x, *y, *tempx, *tempy, *tempc;
	double a;
	double exe_time;
	int myid, size;
	struct timeval stop_time, start_time;
	
	c = (double *) malloc(N*sizeof(double));
	x = (double *) malloc(N*sizeof(double));
	y = (double *) malloc(N*sizeof(double));
	a = 0.01;
	MPI_Init(&argc,&argv);
	MPI_Comm_size(MPI_COMM_WORLD, &size);
	MPI_Comm_rank(MPI_COMM_WORLD, &myid);
	tempx = (double *) malloc(N/size*sizeof(double));
	tempy = (double *) malloc(N/size*sizeof(double));
	tempc = (double *) malloc(N/size*sizeof(double));
	if(myid == 0){	
		for(i=0;i<N;i++){
			x[i] = i;
			y[i] = i;
			c[i] = 0;
		}
		printf("\n Initial Array :\n");
		for(i=0;i<N;i++){
			printf("%lf,%lf\t", x[i], y[i]);
		}
	}	
	gettimeofday(&start_time, NULL);
	MPI_Scatter(x, N/size, MPI_DOUBLE, tempx, N/size, MPI_DOUBLE, 0, MPI_COMM_WORLD);
	MPI_Scatter(y, N/size, MPI_DOUBLE, tempy, N/size, MPI_DOUBLE, 0, MPI_COMM_WORLD);
	for(i=0;i<N/size;i++){
		tempc[i] = a*tempx[i] + tempy[i];
	}
	MPI_Gather(tempc, N/size, MPI_DOUBLE, c, N/size, MPI_DOUBLE, 0, MPI_COMM_WORLD);
	gettimeofday(&stop_time, NULL);	
	exe_time = (stop_time.tv_sec + (stop_time.tv_usec/1000000.0)) - (start_time.tv_sec + (start_time.tv_usec/1000000.0));	
	if(myid == 0){
		printf("\n Final Array :\n");
		for(i=0;i<N;i++){
			printf(" %lf", c[i]);
		}
		printf("\n");
	}
	free(c);
	free(x);
	free(y);
	free(tempc);
	free(tempx);
	free(tempy);
	MPI_Finalize();
}

