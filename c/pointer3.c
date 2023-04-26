#include<stdio.h>

int cube(int a)
{
	int cb;
	cb = a * a * a;
	return cb;
}

int main() 
{
	int x, result;
	printf("Enter a number : ");
	scanf("%d", &x);
	result = cube(x);
	printf("Cube is : %d\n", result);
	printf("Cube is : %d\n", cube(8));
	return 0;
}
