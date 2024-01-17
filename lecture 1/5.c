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
	ans=(x*x*x)+(y*y*y)+(z*z*z)+3*x^2*y+3*x*y^2+3*x^2*z+3*x*z^2+3*y^2*z+3*y*z^2+6*x*y*z;
	printf("(x+y+z)^3=%d",ans);
}