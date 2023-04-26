#include <stdio.h>
#define N 9
int main(){
	// int ar[] = {5,1,9,2,3,8,7,4,6};
	int ar[] = {9,8,7,6,5,4,3,2,1};
	int i, j;
	for (int i = 0; i < N; i++)
	{	
		for (int j = 0; j < N-1; j++)
			{
				if (ar[j] > ar[j+1])
				{
					int temp = ar[j];
					ar[j] = ar[j+1];
					ar[j+1] = temp;
				}
			}
		for (int j = 0; j < 9; j++)
			printf("%d ", ar[j]);

	printf("\n");
	}
	for (int i = 0; i < 9; i++)
		printf("%d ", ar[i]);
	printf("\n");
}