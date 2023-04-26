#include<stdio.h>
int main()
{
	int radius, height;
	float volume, surf_area;
	printf("Enter radius & height:");
	scanf("%d %d", &radius, &height);
	volume = 3.14 * radius * radius * height;
	printf("Volume = %f\n", volume);
	surf_area = 2 * 3.14 * radius * height;
	printf("Surface area = %f\n", surf_area);
	
	return 0;
}


