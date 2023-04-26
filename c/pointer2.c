#include<stdio.h>

int square(int a)
{
	int sq;
	sq = a * a;
	return sq;
}

int main() 
{
	int x, result;
	printf("Enter a number : ");
	scanf("%d", &x);
	result = square(x);
	printf("Square is : %d\n", result);
	printf("Square is : %d\n", square(6));
	return 0;
}
