#include<stdio.h>
#include<omp.h>

#define N 8
int main(){
        int a[N][N], b[N], c[N];
        int myid, size;
        MPI_Init(&argc, &argv);
        MPI_Comm_size(MPI_COMM_WORLD, &size);
        MPI_Comm_rank(MPI_COMM_WORLD, &myid);
        if(myid == 0)
        {
                for (int i = 0; i < N; ++i)
                        for (int j = 0; j < N; ++j)
                                a[i][j] = 1;
                for (int i = 0; i < N; ++i)
                {
                        b[i] = 2;
                        c[i] = 0;
                }
        }

        for (int i = 0; i < N; ++i)
                for (int j = 0; j < N; ++j)
                        c[i] += a[i][j] * b[i];
        
        if(myid == 0)
                for (int i = 0; i < N; ++i)
                        printf("%d ",c[i]);

        // End MPI Environment
        MPI_Finalize();
        return 0;
}