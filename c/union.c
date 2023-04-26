#include<stdio.h>
#include<string.h>

union student 
{
	int roll;
	char name[27];
	float marks;
};
struct student1 
{
	int roll;
	char name[10];
	float marks;
}s2;
int main() 
{
	union student s1;
	
	printf("Size of union : %ld\n", sizeof(s1));
	return 0;
}
