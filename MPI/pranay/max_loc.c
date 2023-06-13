#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>
 int main(int argc, char **argv) {
    int myid, size;
    int values[10] = {12, 9, 45, 34, 7, 32, 77, 89, 38, 52};
    int max_val, max_loc, val, recv_val, loc;
    int i, j;
    MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    MPI_Comm_rank(MPI_COMM_WORLD, &myid);
    val = values[myid];
    loc = myid;
    for (i = size; i > 0; i = i / 2) {
        j = i / 2;
        if (myid < i) {
            if (myid < j) {
                MPI_Recv(&recv_val, 1, MPI_INT, myid + j, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
                if (val < recv_val) {
                    val = recv_val;
                    loc = myid + j;
                }
            } else {
                MPI_Send(&val, 1, MPI_INT, myid - j, 0, MPI_COMM_WORLD);
            }
        }
    }
    MPI_Reduce(&val, &max_val, 1, MPI_INT, MPI_MAX, 0, MPI_COMM_WORLD);
    MPI_Reduce(&loc, &max_loc, 1, MPI_INT, (val == max_val) ? MPI_MIN : MPI_MAX, 0, MPI_COMM_WORLD);
    MPI_Finalize();
     if (myid == 0) {
        printf("Max value = %d, located at process %d\n", max_val, max_loc);
    }
     return 0;
}