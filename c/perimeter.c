#include<stdio.h>
int main()
{
	int height, width;
	int perimeter;
	printf("Enter height and width:");
	scanf("%d %d", &height, &width);
	perimeter = 2*(width + height);
	printf("The result = %d\n", perimeter);

	return 0;
}
