#include<stdio.h>
#include<string.h>
int main ()
{
	char name[] = {'P','r','a','n','a','Y','\0'};
	char city[] = "Delhi";
	char str[] = "Maharashtra";
	printf("Length = %ld\n",strlen(name));
	strcpy(name, city);
	printf("Copy = %s\n", name);
	strcat(city, str);
	printf("Join = %s\n", city);
	//strupr()
	//strlwr()
	return 0;
}
