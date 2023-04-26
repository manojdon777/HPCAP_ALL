#include<stdio.h>

int main(){

	int i, j, num = 9;
	/*printf("Please enter the number: ");
	scanf("%d", &num);*/
	
	for(i=0; i<num; i++){
		for(j=num; j>i; j--)
			printf("* ");
		printf("\n");
	}
	return 0;
}
