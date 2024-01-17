#include<stdio.h>

main()
{
	int x;
	int y;
	int ans;
	printf("enter a value of x");
	scanf("%d",&x);
	printf("enter a value of y");
	scanf("%d",&y);
	ans=(x*x*x)-(y*y*y)-3*x^2*y+3*x*y^2;
	printf("(x-y)^3=%d",ans);
}