#include<stdio.h>
#include<stdlib.h>

int main(){

	int A[10], i;
	int num = 93;
	for(i=0; i<10; i++)
		A[i] = rand()%100;
	
	for(i=0; i<10; i++)
		printf("%d ", A[i]);
	for(i=0; i<10; i++)
		if(num == A[i]){
			printf("\nNumber %d Found in the array.\n", num);
			return 0;
		}
	
	printf("\nNumber %d not found in the array.\n", num);		
	return 0;
}
