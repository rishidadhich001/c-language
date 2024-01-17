#include<stdio.h>

main()
{
	int x;
	int y;
	int z;
	int ans;
	printf("enter a value of x");
	scanf("%d",&x);
	printf("enter a value of y");
	scanf("%d",&y);
	printf("enter a value of z");
	scanf("%d",&z);
	ans=(x*x)+2*x*y+2*x*z+(y*y)+2*y*z+(z*z);
	printf("(x+y+z)^2=%d",ans);
}