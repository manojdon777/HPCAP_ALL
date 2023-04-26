/* Program of sorting using merge sort through recursion*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 20
int array[MAX];
void merge_sort( int low, int high );
void merge( int low, int mid, int high );
int main()
{
	int i,n;
	for(i=0;i<MAX;i++)
	{
		array[i] = random()%100;
	}
	printf("Unsorted list is :\n");
	for( i = 0 ; i<MAX ; i++)
		printf("%d ", array[i]);

	merge_sort( 0, MAX-1);

	printf("\nSorted list is :\n");
	for( i = 0 ; i<MAX; i++)
		printf("%d ", array[i]);
	printf("\n");
	return 0;
}/*End of main()*/

void merge_sort( int low, int high )
{
	int mid;
	if( low != high )
	{
		mid = (low+high)/2;
		merge_sort( low , mid );
		merge_sort( mid+1, high );
		merge( low, mid, high );
	}
}/*End of merge_sort*/

void merge( int low, int mid, int high )
{
	int temp[MAX];
	int i = low;
	int j = mid +1 ;
	int k = low ;

	while( (i <= mid) && (j <=high) )
	{
		if(array[i] <= array[j])
			temp[k++] = array[i++] ;
		else
			temp[k++] = array[j++] ;
	}/*End of while*/
	while( i <= mid )
		temp[k++]=array[i++];
	while( j <= high )
		temp[k++]=array[j++];

	for(i= low; i <= high ; i++)
		array[i]=temp[i];
}/*End of merge()*/