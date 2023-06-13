#include"stdio.h"
#include"stdlib.h"
#include"mpi.h"

int main(int argc, char **argv){
	int myid, size;
	int values[10] = {12,9,45,34,7,32,77,89,38,52};
	int max, val;
	MPI_Init(&argc, &argv);
	MPI_Comm_size(MPI_COMM_WORLD, &size);
	MPI_Comm_rank(MPI_COMM_WORLD, &myid);
	if(myid == 0){
		max = values[myid];
		for (int i = 1; i < size; i++){
			MPI_Recv(&val, 1, MPI_INT, i, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
			if(val > max)
				max = val;	
		}
		printf("Max = %d\n", max);		
	}
	else{
		val = values[myid];
		MPI_Send(&val, 1, MPI_INT, 0, 0, MPI_COMM_WORLD);
	}
	//End MPI environment
	MPI_Finalize();
}