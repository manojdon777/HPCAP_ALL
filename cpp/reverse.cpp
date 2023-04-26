#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char name[] = "abc";
	char ch;
	int i = 0, j = strlen(name) - 1;
	while(i<j)
	{
		swap(name[i], name[j]);
		i++;
		j--;
	}
	cout << name <<endl;
	cout << endl;
	return 0;
}