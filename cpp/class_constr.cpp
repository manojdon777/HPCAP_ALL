#include<iostream>
#include<string.h>
using namespace std;
class Person{
	public:
		char name[10];
		int age;
		float salary;
		Person(){
			cout << "Class initialized!" << endl;
		}
		void input(){
			cout << "Enter the name: ";
			cin >> name;
			cout << "Enter the age: ";
			cin >> age;
			cout << "Enter the salary: ";
			cin >> salary;
		}
		void show(){
			cout << "Your data is :" << endl;
			cout << name << " " << age << " " << salary << endl;
		}
};
int main()
{
	Person p1, p2;
	p1.input();
	p1.show();
	// cout<<p1.name << " " << p1.age << " " << p1.salary << endl;
	p2.input();
	p2.show();
	// cout<<p2.name << " " << p2.age << " " << p2.salary << endl;	
	return 0;
}