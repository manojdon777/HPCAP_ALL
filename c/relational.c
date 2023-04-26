#include<stdio.h>
int main()
{
	int num1 = 22, num2 = 44;
	printf("\n");
	// scanf("%i%i", &num1, &num2);
	printf("The less than %i\n",num1 < num2);
	printf("The less than or equal to %i\n",num1 <= num2);
	printf("The greater than %i\n",num1 > num2);
	printf("The greater than or equal to %i\n",num1 >= num2);
	printf("The equal to %i\n",num1 == num2);
	printf("The not equals to %i\n",num1 != num2);

	return 0;
}
