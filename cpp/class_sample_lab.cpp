#include<iostream>
using namespace std;
class Student{
	int sub1;
	int sub2;
	int sub3;
	public:
	Student(){
		sub1 = 40;
		sub2 = 40;
		sub3 = 40;
		cout << "Inside Constructor" << endl;
	}
	Student(int a)
	{
		sub1 = a;
		sub2 = a;
		sub3 = a;
	}
	Student(int a, int b, int c){
		sub1 = a;
		sub2 = b;
		sub3 = c;
	}
	void set_marks(int s1,int s2,int s3);
	void display_marks();
	~Student(){
		cout << "Inside Destructor" << endl;
	}
 };
void Student :: set_marks(int s1,int s2=22,int s3=33){
	sub1 = s1;
	sub2 = s2;
	sub3 = s3;
}
void Student :: display_marks(){
	cout << "Subject 1 marks = " << sub1 << endl;
	cout << "Subject 2 marks = " << sub2 << endl;
	cout << "Subject 3 marks = " << sub3 << endl;
}
int main()
{
	Student s1;
	s1.set_marks(60, 70, 80);
	s1.display_marks();
	{
		Student *s2 = new Student(90);
		s2->display_marks();
		delete s2;
	}
	cout << "Exiting" << endl;
	Student s3(10,20,30);
	s3.display_marks();
	Student s4;
	s4.set_marks(11);
	s4.display_marks();
	return 0;
}