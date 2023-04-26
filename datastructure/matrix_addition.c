#include<stdio.h>
#define N 3
int main(){
	int A[N][N], B[N][N], C[N][N];
	int i,j;
	for(i = 0; i < N; i++){
		for (j = 0; j < N; j++){
			A[i][j] = 1;
			B[i][j] = 1;
			C[i][j] = 1;
		}
	}
	printf("A Matrix\n");
	for(i = 0; i < N; i++){
		for (j = 0; j < N; j++){
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	printf("B Matrix\n");
	for(i = 0; i < N; i++){
		for (j = 0; j < N; j++){
			printf("%d ", B[i][j]);
		}
		printf("\n");
	}
	for(i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			C[i][j] = A[i][j] + B[i][j];
	printf("Addition of Matrix\n");
	for(i = 0; i < N; i++){
		for (j = 0; j < N; j++){
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}

}