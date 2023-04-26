#include<iostream>
using namespace std;
class Shape{
	public:
		int radius, side;
		void input(){
			side = 50;
		}

		float calculateArea() {
			return side * side;
		}
};
class Circle : public Shape{
	public:
		void input(){
			radius = 10;
		}
		float calculateArea(){
			return 3.14 * radius * radius;
		}
};
int main(){
	Circle c;
	c.input();
	cout << "Area is: " << c.calculateArea() << endl;

	Shape s;
	s.input();
	cout << "Area is: " << s.calculateArea() << endl;

	return 0;
}