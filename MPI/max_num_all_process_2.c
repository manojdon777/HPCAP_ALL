#include"stdio.h"
#include"stdlib.h"
#include"mpi.h"

int main(int argc, char **argv){
	int myid, size;
	int values[10] = {12,9,45,34,7,32,77,89,38,52};
	int max, val, recv_val;
	int i, j;
	MPI_Init(&argc, &argv);
	MPI_Comm_size(MPI_COMM_WORLD, &size);
	MPI_Comm_rank(MPI_COMM_WORLD, &myid);

	val = values[myid];
	for(i=size;i>0;i=i/2){
		j = i/2;
		if(myid < i){
			if(myid < j){
				MPI_Recv(&recv_val, 1, MPI_INT, myid+j, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
				if(val < recv_val){
					val = recv_val;
				}
			}
			else{
				MPI_Send(&val, 1, MPI_INT, myid-j, 0, MPI_COMM_WORLD);
			}
		}
	}
	//End MPI environment
	MPI_Finalize();
		if(myid == 0){
		printf("Max = %d\n", val);		
	}
}