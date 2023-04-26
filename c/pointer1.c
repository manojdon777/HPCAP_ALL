#include<stdio.h>

void square(int a)
{
	int sq;
	sq = a * a;
	printf("Square is : %d\n", sq);
}

int main() 
{
	int x;
	printf("Enter a number : ");
	scanf("%d", &x);
	square(x);
	square(12);
	return 0;
}
