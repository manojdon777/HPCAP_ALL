#include"stdio.h"
#include"mpi.h"

int main(int argc, char **argv){
	int myid, size;
	MPI_Init(&argc, &argv);
	MPI_Comm_size(MPI_COMM_WORLD, &size);
	MPI_Comm_rank(MPI_COMM_WORLD, &myid);
	printf("hie\n");
	MPI_Finalize();
}
