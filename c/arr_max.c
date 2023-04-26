#include<stdio.h>
#include<stdlib.h>

int main(){

	int A[10], i;
	int max;
	for(i=0; i<10; i++)
		A[i] = rand()%100;
	max = A[0];
	for(i=0; i<10; i++)
		printf("%d ", A[i]);
	for(i=1; i<10; i++)
		if(max < A[i])
			max = A[i];
	
	printf("\nMax = %d\n", max);		
	return 0;
}
