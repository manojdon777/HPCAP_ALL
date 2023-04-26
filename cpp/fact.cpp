#include<iostream>
#include<string.h>
using namespace std;

int fact(int num){
	int result = 1;
	for (int i = 1; i <= num; i++)
		result *= i;
	return result;
}

int main()
{
	int num = 5;
	cout << "Factorial is = " << fact(5) << endl;
}