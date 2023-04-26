#include<stdio.h>
int main ()
{
	int num;
	for (num=0; num<10; num++){
		if (num == 5)
			break;
		printf("%i\n", num);
	}
	return 0;
}
		
