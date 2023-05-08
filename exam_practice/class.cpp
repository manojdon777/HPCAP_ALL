#include <iostream>
using namespace std;
class Base
{
public:
	void fun()
	{
		cout << "Base\n";
	}
};
class Derived : public Base
{
public:
	void fun()
	{
		cout << "Derived\n";
	}
};
int main()
{
	Derived derived;
	Base base;
	base = derived;
	base.fun();
	return 0;
}
