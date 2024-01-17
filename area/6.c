#include<stdio.h>

main()
{
	const float pi=3.14;
	int r;
	float per;
	printf("Enter a radius:");
	scanf("%d",&r);
	per = 2*pi*r;
	printf("perimeter of circle:%.2f",per);
	
}