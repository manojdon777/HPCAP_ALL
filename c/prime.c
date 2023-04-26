#include<stdio.h>

int main(){

	int i, num;
	printf("Please enter the number: ");
	scanf("%d", &num);
	
	if (num == 0 || num == 1){
		printf("%d is a not prime number\n", num);
		return 0;
	}
	
	for(i=2; i<num/2 + 1; i++){
		if(num%i == 0){
			printf("%d is a not prime number\n", num);
			return 0;
		}
	}
	
	printf("%d is a prime number\n", num);
	
	return 0;
}
