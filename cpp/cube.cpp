#include<iostream>
using namespace std;
int main()
{
	int side, volume, surf_area;
	cout << "Enter side:";
	cin >> side;
	volume = side * side *side;
	cout << "Volume = " << volume << endl;
	surf_area = 6 * side * side;
	cout << "Surface area = " << surf_area << endl;
	
	return 0;
}


