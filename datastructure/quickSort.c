#include<stdio.h>
#include<stdlib.h>
#define N 10
int ar[N] = {83, 86, 77, 15, 93, 35, 86, 92, 49, 21};
int partition(int p, int r){
	int i = p;
	int j;
	for (j = p; j < r-1; j++){
		if(ar[j] <= ar[r-1]){
			int temp;
			temp = ar[i];
			ar[i] = ar[j];
			ar[j] = temp;
			i++;
		}
	}
	int temp;
	temp = ar[i];
	ar[i] = ar[r-1];
	ar[r-1] = temp;
	return i;
}
void quickSort(int low, int high){
	if(high - low > 1){
		int pivot = partition(low, high);
		quickSort(low, pivot);
		quickSort(pivot+1, high);
	}
}
int main(){
	for (int i = 0; i < N; ++i)
		printf("%d ", ar[i]);
	printf("\n");
	quickSort(0, N);
	for (int i = 0; i < N; ++i)
		printf("%d ", ar[i]);
	printf("\n");
}