#include<stdio.h>
int main ()
{
	int num;
	for (num=0; num<10; num++){
		if (num == 5)
			continue;
		printf("%i\n", num);
	}
	return 0;
}
		
