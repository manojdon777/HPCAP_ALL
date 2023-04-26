#include<stdio.h>
int main ()
{
	int num;
	printf("Enter the number:");
	scanf("%i", &num);
	if(num > 0) {
		printf("Number is positive \n");
	}
	else if(num < 0) {
		printf("Number is negative \n");
	}
	else
		printf("Number is neighter negative nor positive\n");
	return 0;
}
		
