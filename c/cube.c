#include<stdio.h>
int main()
{
	int side, volume, surf_area;
	printf("Enter side:");
	scanf("%d", &side);
	volume = side * side *side;
	printf("Volume = %d\n", volume);
	surf_area = 6 * side * side;
	printf("Surface area = %d\n", surf_area);
	
	return 0;
}


