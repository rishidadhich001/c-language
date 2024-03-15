#include<stdio.h>
main()
{
	int a,b;
	printf("enter a value a : ");
	scanf("%d",&a);
	printf("enter a value b : ");
	scanf("%d",&b);
	
	int *x=&a;
	int *y=&b;
	if(*x>*y)
	{
		printf("a is maximum ",*x);
	}
	else
	{
		printf("b is maximum ",*y);
	}
	
}
