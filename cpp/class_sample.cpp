#include<iostream>
#include<string.h>

using namespace std;
class Person{
	public:
		char name[20];
		int age;
		float salary;
};
int main()
{
	Person p1, p2;
	p1.age = 25;
	p1.salary = 45000;
	strcpy(p1.name, "Prem");
	p2.age = 23;
	p2.salary = 23000;
	strcpy(p2.name, "Priya");
	cout<<p1.name << " " << p1.age << " " << p1.salary << endl;
	cout<<p2.name << " " << p2.age << " " << p2.salary << endl;	
	return 0;
}