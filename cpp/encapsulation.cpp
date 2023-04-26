#include<iostream>
using namespace std;
class Circle{
		float radius;
	public:
		Circle(float r){
			radius = r;
		}
		float getArea(){
			float a;
			a = 3.14 * radius * radius;
			return a;
		}
		int getRadius() {
			return radius ;
		}
};
int main()
{
	int rad = 18;
	Circle c(rad);
	cout << "Area of Circle of radius "<< c.getArea() << " is: " << c.getArea() << endl;
}