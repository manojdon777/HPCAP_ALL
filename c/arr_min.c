#include<stdio.h>
#include<stdlib.h>

int main(){

	int A[10], i;
	int min;
	for(i=0; i<10; i++)
		A[i] = rand()%100;
	min = A[0];
	for(i=0; i<10; i++)
		printf("%d ", A[i]);
	for(i=1; i<10; i++){
		if(min > A[i])
			min = A[i];
	}
	printf("\nMin = %d\n", min);		
	return 0;
}
