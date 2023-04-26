#include<iostream>
using namespace std;
class Shape{
public:
	virtual void display(){
		cout << "Inside Shape" << endl;
	}
};
class Circle : public Shape{
public:
	void display(){
		cout << "Inside Circle" << endl;
	}

};
int main()
{
	Shape *s;
	Circle c;
	s = &c;
	s->display();
	return 0;
}