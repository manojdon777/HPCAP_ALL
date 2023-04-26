#include<stdio.h>
#include<stdlib.h>
#define N 10
int stack[2*N];
int top;
void push(int a){
	if(top==(2*N-1)){
		printf("\nOverflow!");
		return;
	}
	top++;
	stack[top] = a;
}
int pop(){
	if(top == -1){
		printf("\nUnderflow");
		return -1;
	}
	return stack[top--];
}
int main()
{
	int A[N];
	int i;
	int flag;
	top = -1;
	for(i=0;i<N;i++)
		A[i] = rand() % 100;
	for(i=0;i<N;i++)
		printf("%d ", A[i]);
	for(i=0;i<N;i++)
		push(A[i]);
	for(i=0;i<N;i++)
		A[i] = pop(A[i]);
	printf("\n");
	for(i=0;i<N;i++)
		printf("%d ", A[i]);
	printf("\n");

	return 0;
}