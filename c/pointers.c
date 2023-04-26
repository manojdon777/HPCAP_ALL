#include<stdio.h>
#include<string.h>
int main ()
{
	int num1 = 12, num2 = 45, num3 = 30;
	int *p1, *p2, *p3;
	p1 = &num1;
	p2 = &num2;
	p3 = &num3;
	
	printf("Address1: %p\n", p1);
	printf("Address2: %p\n", p2);
	printf("Address3: %p\n", p3);
	
	printf("First Data: %d\n", *p1);
	printf("Second Data: %d\n", *p2);
	printf("Third Data: %d\n", *p3);
	
	return 0;
}
