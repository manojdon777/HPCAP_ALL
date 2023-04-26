#include<stdio.h>
int isPrime(int num){
	int i;
	if (num == 0 || num == 1)
		return 0;
	for(i=2; i<num/2; i++){
		if (num%i == 0)
			return 0;
	}
	return 1;
}
int main(){
	int i;
	for(i=1; i<10; i++){
		if(isPrime(i) == 1)
			printf("%i is Prime\n", i);
		else
			printf("%i is not Prime\n", i);
		}
}
