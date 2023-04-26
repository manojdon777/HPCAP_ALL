#include<stdio.h>
#define N 10
int array[] = {0,2,4,6,8,1,3,5,7,9};
void merge(int low, int mid, int high){
	int temp[N];
	int i = low;
	int j = mid + 1;
	int k = low;

	while(i <= mid && j <= high){
		if(array[i] <= array[j])
			temp[k++] = array[i++];
		else
			temp[k++] = array[j++];
	}

	while(i <= mid)
		temp[k++] = array[i++];

	while(j <= high)
		temp[k++] = array[j++];

	for(i=low; i<=high; i++)
		printf("%d ", temp[i]);
}
int main(){
	merge(0,N/2,N);
	printf("\n");
	return 0;
}