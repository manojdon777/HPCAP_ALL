#include<stdio.h>
#include<stdlib.h>
#include"mpi.h"
#define N 900000000

int main(int argc, char **argv){
        double step;
        int i;
        double x, pi, sum = 0.0;
        double start_time, end_time, total_time;
        int myid, size;
        MPI_Init(&argc, &argv);
        MPI_Comm_size(MPI_COMM_WORLD, &size);
        MPI_Comm_rank(MPI_COMM_WORLD, &myid);

        step = 1.0/(double)N;
        start_time = MPI_Wtime();
        for(i=0; i<N; i++){
                x = (i)*step;
                sum = sum + 4.0/(1.0+x*x);
        }
        pi = step*sum;
        end_time = MPI_Wtime();
        total_time = end_time - start_time;
        MPI_Finalize();
        if(myid==0)
                printf("Pi = %f and time taken = %f\n", pi, total_time);
        return 0;
}