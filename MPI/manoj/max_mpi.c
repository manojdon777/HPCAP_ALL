#include"stdio.h"
#include"stdlib.h"
#include"mpi.h"
#include <time.h>
int main(int argc, char **argv){
	int myid, size;
	int values[10] = {12,9,27,39,93,45,14,78,23,86};
	int max, val;
	time_t t1;
	MPI_Init(&argc, &argv);
	MPI_Comm_size(MPI_COMM_WORLD, &size);
	MPI_Comm_rank(MPI_COMM_WORLD, &myid);

	if(myid == 0){
		srand ( (unsigned) time (&t1) + myid);
		max = rand()%100;
		printf("Process %d has random value = %d\n", myid, max);
		for(int i=1; i<size; i++){
			MPI_Recv(&val, 1, MPI_INT, i, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
			if(val > max)
				max = val;
		}
		printf("\n Max Value = %d\n",max);
	}
	else{
		srand ( (unsigned) time (&t1) + myid);
		val = rand()%100;
		printf("Process %d has random value = %d\n", myid, val);
		MPI_Send(&val, 1, MPI_INT, 0, 0, MPI_COMM_WORLD);
	}
	MPI_Finalize();
}
