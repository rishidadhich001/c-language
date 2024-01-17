#include<stdio.h>

main()
{
	float p;
	float r;
	float t;
	float si;
	printf("Enter a p:");
	scanf("%f",&p);
	printf("Enter a r:");
	scanf("%f",&r);
	printf("Enter a t:");
	scanf("%f",&t);
	si = p*r*t/100;
	printf("simple interest:%.2f",si);
	
	
}