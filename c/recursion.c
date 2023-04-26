#include<stdio.h>

void show()
{
	printf("Hello World\n");
	show();
}

int main() 
{
	show();
	return 0;
}
