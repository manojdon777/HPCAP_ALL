#include<iostream>
using namespace std;

int main() 
{
	int num[5];
	for(int i=0; i<5; i++){
		cout<<"Enter the number:";
		cin>>num[i];
	}
	int add = 0;
	for(int i=0; i<5; i++){
		add = add + num[i];
	}
	cout<<"Average is :"<< (float) add/5<<endl;
	return 0;
}
