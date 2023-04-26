#include<stdio.h>
#include<string.h>

struct student 
{
	int roll;
	char name[10];
	float marks;
};
int main() 
{
	struct student s1;
	s1.roll = 1;
	strcpy(s1.name, "Pranay");
	s1.marks = 12.22;
	printf("%d %s %.2f\n", s1.roll, s1.name, s1.marks);
	return 0;
}
