#include<stdio.h>
main()
{
	int x;
	printf("Enter a value of x :");
	scanf("%d",&x);
	int y,z;
	printf("Enter a value of y :");
	scanf("%d",&y);

	int *a=&x;
	int *b=&y;
	int *c=&z;
	
	*c=*a;
	*a=*b;
	*b=*c;

	printf("x is :%d\n",x);
	printf("y is :%d",y);
}
