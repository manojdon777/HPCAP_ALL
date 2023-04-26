#include<iostream>
using namespace std;

int main()
{
	int height, width;
	int perimeter;
	cout << "Enter height and width: ";
	cin >> height >> width;
	perimeter = 2 * (width + height);
	cout << "The result = " << perimeter << endl;

	return 0;
}
