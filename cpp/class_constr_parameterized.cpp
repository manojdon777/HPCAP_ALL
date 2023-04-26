#include<iostream>
#include<string.h>
using namespace std;
class Person{
	public:
		int age;
		float salary;
		Person(){
			cout << "Class initialized!" << endl;
		}
		Person(int a, float s) {
			age = a;
			salary = s;
		}
		void show(){
			cout << "Your data is :" << endl;
			cout << age << " " << salary << endl;
		}
};
int main()
{
	Person p1(23, 56000), p2(26, 12000), p3;
	p1.show();
	p2.show();
	p3.show();
	return 0;
}