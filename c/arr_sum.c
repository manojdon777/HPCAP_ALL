#include<stdio.h>
#include<stdlib.h>

int main(){

	int A[10], i;
	int sum = 0;
	for(i=0; i<10; i++)
		A[i] = rand()%100;
	
	for(i=0; i<10; i++)
		printf("%d ", A[i]);
	for(i=1; i<10; i++)
		sum += A[i];
	
	printf("\nSum = %d\n", sum);		
	return 0;
}
