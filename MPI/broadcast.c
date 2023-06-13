#include"stdio.h"
#include"stdlib.h"
#include"mpi.h"

int main(int argc, char **argv){
	int myid, size;
	int sum = 100;
	MPI_Init(&argc, &argv);
	MPI_Comm_size(MPI_COMM_WORLD, &size);
	MPI_Comm_rank(MPI_COMM_WORLD, &myid);
	if (myid==0)
		sum = 100;
	else
		sum = 101;

	// MPI_Reduce(&myid, &sum, 1, MPI_INT, MPI_SUM, 0, MPI_COMM_WORLD);
	MPI_Bcast(&sum, 1, MPI_INT, 0, MPI_COMM_WORLD);
	printf("myid = %d sum = %d\n", myid, sum);
	//End MPI environment
	MPI_Finalize();
}