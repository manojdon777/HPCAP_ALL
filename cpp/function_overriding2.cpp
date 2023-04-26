#include<iostream>
using namespace std;
class Shape{
	public:
		int radius, side;
		virtual void input(){
			side = 50;
		}

		virtual float calculateArea() {
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
	Shape s, *p;
	p = &s;
	p->input();
	cout << "Area is: " << p->calculateArea() << endl;

	p = &c;
	p->input();
	cout << "Area is: " << p->calculateArea() << endl;

	return 0;
}