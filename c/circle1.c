#include<stdio.h>
#include<math.h>
int main(){
	int rad = 16;
	for (int i = 0; i < rad; ++i)
	{
		for (int j = 0; j < rad - sqrt(rad*rad - (rad-i)*(rad-i)); j++)
			printf(" ");
		for (int j = rad - sqrt(rad*rad - (rad-i)*(rad-i)); j < rad; j++)
			printf("*");
		for (int j = rad; j <  rad + sqrt(rad*rad - (rad-i)*(rad-i)); ++j)
			printf("*");
		printf("\n");
	}
	for (int i = 0; i < rad; i++)
	{
		for (int j = 0; j < rad + sqrt(rad*rad - (rad-i)*(rad-i)); j++)
		{
			printf("*");
		}
		printf("\n");
	}	
}