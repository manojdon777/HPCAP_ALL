#include <stdio.h>
int main(){

	int i;
	int num1 = 'A';
	int num2 = 'F';
	scanf("%x", &num1);
	scanf("%x", &num1);
	printf("Num1 = %d Num2 = %d \n", num1, num2);
	num1 ^= num2 ^= num1 ^= num2;
	printf("Num1 = %d Num2 = %d \n", num1, num2);
	return 0;
}
