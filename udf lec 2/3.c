#include<stdio.h>

	int sum(int m)
	{
		if(m<=0)
		{
			return m;
		}
		else if (m>0)
		{
			return m+sum(m-1);
		
		}
		
	}
		int fac(int x)
	{
		if(x<=1)
		{
			return x;
		}
		else if (x>0)
		{
			return x*fac(x-1);
		
		}
		
	}
main()
{
	int m;
	printf("Enter value m:");
	scanf("%d",&m);
		printf("sum is: %d\n",sum(m));
		
	int x;
	printf("Enter value x:");
	scanf("%d",&x);
	printf("factorial is: %d ",fac(x));
		
}
