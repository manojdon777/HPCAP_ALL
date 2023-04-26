#include<iostream>
using namespace std;

int strlen1 (char *ch){
	int length = 0;
	int i;
	while(ch[i] != '\0'){
		length++;
		i++;
	}
	return length;
}

int main()
{
	char name[] = "hpcap";
	int i = 0, j = strlen1(name);
	while( i < j ){
		swap(name[i], name[j]);
		i++;
		j--;
	}
	cout << name << endl;
	return 0;
}