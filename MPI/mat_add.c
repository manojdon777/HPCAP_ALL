#include"stdio.h"
#include"stdlib.h"
#include"mpi.h"
#define N 20
int main(int argc, char **argv){
	int myid, size;
	int i, a[N], b[N], c[N];
	MPI_Init(&argc, &argv);
	MPI_Comm_size(MPI_COMM_WORLD, &size);
	MPI_Comm_rank(MPI_COMM_WORLD, &myid);

	if(myid==0){
		for (int i = 0; i < N; ++i){
			a[i] = 1.11;
			b[i] = 2.22;
		}
	}
	MPI_Scatter(&a, ARRSIZE/4, MPI_INT, &a_chunk, ARRSIZE/4, MPI_INT, 0, MPI_COMM_WORLD);
	MPI_Scatter(&b, ARRSIZE/4, MPI_INT, &b_chunk, ARRSIZE/4, MPI_INT, 0, MPI_COMM_WORLD);
	for(i=0; i<ARRSIZE; i++){
		c_chunk[i] = a_chunk[i] + b_chunk[i]
	}
	MPI_Gather(&c_chunk, ARRSIZE/4, MPI_INT, &c, ARRSIZE/4, MPI_INT, 0, MPI_COMM_WORLD);
	//End MPI environment
	MPI_Finalize();
}