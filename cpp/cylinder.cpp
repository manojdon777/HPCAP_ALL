#include<iostream>
using namespace std;

int main()
{
	int radius, height;
	float volume, surf_area;
	cout << "Enter radius & height:";
	cin >> radius >> height;
	volume = 3.14 * radius * radius * height;
	cout << "Volume = " << volume << endl;
	surf_area = 2 * 3.14 * radius * height;
	//printf("Surface area = %f\n", surf_area);
	cout << "Surface area = " << surf_area << endl;
	
	return 0;
}


