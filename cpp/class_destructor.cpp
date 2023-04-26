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
		~Person(){
			cout << "Object Destroyed" << endl;
		}
};
int main()
{
	Person p1(23, 56000);
	p1.show();
	return 0;
}