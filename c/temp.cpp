// Write a base class - “object” which contains member functions for calculating surface
// area and volume. Create three different classes for “Cylinder”, “Cube” and “Sphere”
// which derive “object” class. In the main function, calculate surface area and volume for
// “Cylinder”, “Cube” and “Sphere” classes.
#include<iostream>
using namespace std;
class Object{
	virtual double surfaceArea()
	{
		return 0;
	}
	virtual double volume(){
		return 0;
	}
};
class Cube : public Object{
	int side;
	public:
		Cube(int side){
		this->side = side;
		}
		double surfaceArea(){
			return 6 * side * side;
		}
		double volume(){
			return side * side * side;
		}
};
int main(){
	Cube cube(8);
	cout << "Cube surface area = " << cube.surfaceArea() << "\n";
	cout << "Cube volume = " << cube.volume() << "\n";
	return 0;
}