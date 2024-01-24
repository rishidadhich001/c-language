#include<stdio.h>
main()
{
	int a;
	printf("enter a:");
	scanf("%d",&a);
	if(a==0)
	{
		printf("a is neutral!");
	}
	else if(a<0)
	{
		printf("a is negative !");
	}
	else if(a>0)
	{
		printf("a is positive !");
	}
}