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
	ans=(x*x)+(y*y)-2*(x)*(y);
	printf("(x-y)^2=%d",ans);
}