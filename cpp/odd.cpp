#include<iostream>
using namespace std;

int main()
{
	int N=8,i,j;
	for(i=1;i<=N;i++){
		for(j=1; j<=i;j++)
			cout<<j<<" ";
		cout<<endl;
	}
	return 0;
}
