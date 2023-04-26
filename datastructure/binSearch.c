#include <stdio.h>

int main(){

	int arr[] = {10, 14, 19, 26, 27, 31, 33, 35, 42, 44};
	int num = 26;
	int low = 0;
	int high = 9;
	int mid;
	while(low < high){
		mid = (low + high)/2;
		if(arr[mid] == num){
			printf("%d found in the array\n", num);
			return 0;
		}
		else if(num > arr[mid])
			low = mid;
		else
			high = mid;
	}
	printf("%d not found in the array\n", num);
	return 0;
}
