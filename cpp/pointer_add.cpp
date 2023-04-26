#include<iostream>
using namespace std;

int main()
{
	int num1 = 10;
	int num2 = 20;
	int *ptr1, *ptr2;
	ptr1 = &num1;
	ptr2 = &num2;
	cout << *ptr1 + *ptr2 << endl;
}