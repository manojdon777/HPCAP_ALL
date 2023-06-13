#include"stdio.h"
#include"mpi.h"

int main(int argc, char **argv){
	int myid, size;
	int sum;

	MPI_Init(&argc, &argv);
	MPI_Comm_size(MPI_COMM_WORLD, &size);
	MPI_Comm_rank(MPI_COMM_WORLD, &myid);

	if(myid == 0){
		MPI_Send(&sum, 1, MPI_INT, myid+1, 0, MPI_COMM_WORLD);
		MPI_Recv(&sum, 1, MPI_INT, size-1, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
	}
	else if(myid == (size-1)){
		MPI_Recv(&sum, 1, MPI_INT, myid-1, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
		sum += myid;
		MPI_Send(&sum, 1, MPI_INT, 0, 0, MPI_COMM_WORLD);
	}
	else{
		MPI_Recv(&sum, 1, MPI_INT, myid-1, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
		sum += myid;
		MPI_Send(&sum, 1, MPI_INT, myid+1, 0, MPI_COMM_WORLD);
	}
	//End MPI environment
	MPI_Finalize();
	if(myid==0)
		printf("sum = %d\n", sum);
}
