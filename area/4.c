#include<stdio.h>

main()
{
	float b;
	float h;
	float area;
	printf("Enter a breadth:");
	scanf("%f",&b);
	printf("Enter a height:");
	scanf("%f",&h);
	area=0.5*b*h;
	printf("area of triangle:%.2f",area);
	
}