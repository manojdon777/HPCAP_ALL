#include<iostream>
using namespace std;
class Shape{
protected:
	float radius;
public:
	void set_radius(float r){
		radius = r;
	}
	void get_radius(float r){
		return radius;
	}
};
class Cirle : public Shape{
	float area;
public:
	void calc_area(){
		area = 3.14 * radius * radius;
	}
	float get_area(){
		return area;
	}
};
class Sphere : public Circle{
	float volume;
public:
	void calc_volume(){
		volume = 4.0 / 3.0 * 3.14 * radius * radius * radius;
	}
	void display_volume(){
		cout << "Volume = " << volume << endl;
	}
};
int main()
{
	Sphere s1;
	shape s2;
	s1.set_radius(1.0);
	s1.calc_volume();
	s1.display_volume();
	return 0;
}