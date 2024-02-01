#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("enter a,b,c,d:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	//a,b,c,d
	if(a>b)
	{
	//a,c,d
		if(a>c)
		{
			//a,d
			if(a>d)
			{
				printf("a is maximum");
			}
			else
			{
				printf("d is maximum");
			}
		}
		else
		{
			if(c>d)
			{
				printf("c is maximum");
			}
			else
			{
				printf("d is maximum");
			}
		}
	}
	else
	{
		//b,c,d
		if(b>c)
		{
			if(b>d)
			{
				printf("b is maximum");
			}
			else
			{
				printf("d is maximum");
			}
		}
		else
		{
			if(c>d)
			{
				printf("c is maximum");
			}
			else
			{
				printf("d is maximum");
			}
		}
	}
}
