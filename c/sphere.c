#include<stdio.h>
int main()
{
	int radius;
	float volume, surf_area;
	printf("Enter radius:");
	scanf("%d", &radius);
	volume = 4/3 * 3.14 * radius * radius * radius;
	printf("Volume = %.2f\n", volume);
	surf_area = 4 * 3.14 * radius * radius;
	printf("Surface area = %.2f\n", surf_area);
	
	return 0;
}


