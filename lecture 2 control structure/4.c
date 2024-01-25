#include<stdio.h>
main()
{
	int a,b,c,d,e;
	printf("enter a,b,c,d,e:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	//a,b,c,d,e
	if(a<b)
	{
	//a,c,d,e
		if(a<c)
		{
			//a,d,e
			if(a<d)
			{
				if(a<e)
				{
					printf("a is minimum");
				}
				else
				{
					printf("e is minimum");
				}
			}
			else
			{
				if(d<e)
				{
					printf("d is minimum");
				}
				else
				{
					printf("e is minimum");
				}
			}
		}
		else
		{
			if(c<d)
			{
				if(c<e)
				{
					printf("c is minimum");
				}
			}
			else
			{
				if(d<e)
				{
					printf("d is minimum");
				}
				else
				{
					printf("e is minimum");
				}
			}
		}
	}
	else
	{
		//b,c,d,e
		if(b<c)
		{
			if(b<d)
			{
				if(b<e)
				{
					printf("b is minimum");
				}
				else
				{
					printf("e is minimum");
				}
			}
			else
			{
				if(d<e)
				{
					printf("d is minimum");
				}
				else
				{
					printf("e is minimum");
				}
			}
		}
		else
		{
			if(c<d)
			{
				if(c<e)
				{
					printf("c is minimum");
				}
				else
				{
					printf("e is minimum");
				}
			}
			else
			{
				if(d<e)
				{
					printf("d is minimum");
				}
				else
				{
					printf("e is minimum");
				}
			}
		}
	}
}
