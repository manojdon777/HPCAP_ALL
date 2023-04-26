#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int ar[MAX] = {83, 86, 77, 15, 93, 35, 86, 92, 49, 21};
void merge(int low, int mid, int high){
	int temp[MAX];
	for (int i = low; i < high; i++)
	{
		ar[i] = 88;
	}
	for (int i = low; i < high; i++)
	{
		/* code */
	}
}
void mergeSort(int low, int high){
	int mid;
	mid = (low+high)/2;
	if (low != high)
	{
		mergeSort(low, mid);
		mergeSort(mid + 1, high);
		merge(low, mid, high);
	}

}
int main(){
	int low = 0;
	int high = MAX - 1;
  	int mid = (low + high) / 2;
	for (int i = 0; i < high; i++)
		printf("%d ", ar[i]);
	printf("\n");
	mergeSort(low, high);
	for (int i = 0; i < high; i++)
		printf("%d ", ar[i]);
	printf("\n");
}
