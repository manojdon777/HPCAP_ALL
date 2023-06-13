#include"stdio.h"
#include"stdlib.h"
#include"mpi.h"
#include <time.h>
int main(int argc, char **argv){
	int myid, size;
	time_t t1;
	MPI_Init(&argc, &argv);
	MPI_Comm_size(MPI_COMM_WORLD, &size);
	MPI_Comm_rank(MPI_COMM_WORLD, &myid);
	srand ( (unsigned) time (&t1) + myid);
	printf("Val = %d\n", rand()%100);
	//End MPI environment
	MPI_Finalize();
}