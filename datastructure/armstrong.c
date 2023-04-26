#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int i;
	int number = 40;
	for (i = 0; i*i <= number; i++);
		if ( (i-1)*(i-1) == number ){
			printf("%d  %f\n", i-1, sqrt(number));
			exit(0);
		}
	float low = i-1;
	float high = i;
	float mid;
	while(1)
	{
		mid = (low + high) / 2;
		// printf("%f\n", mid);
		printf("%f = %f\n", mid, mid * mid);
		if (abs( mid * mid - number) < 0.00001){
			break;
		}
		else if( mid*mid > number )
			high = mid;
		else
			low = mid;
	}
	// printf("%f  %f\n", mid, sqrt(number));
	return 0;
}