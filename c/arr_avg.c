#include<stdio.h>
#include<stdlib.h>

int main(){

	int A[10], i;
	int sum = 0;
	float avg;
	for(i=0; i<10; i++)
		A[i] = rand()%100;
	
	for(i=0; i<10; i++)
		printf("%d ", A[i]);
	for(i=1; i<10; i++)
		sum += A[i];
	
	printf("\nAverage = %f\n", (float)sum/10);		
	return 0;
}
