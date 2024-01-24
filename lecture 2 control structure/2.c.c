#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	if(b<a)
	{
		if(c<a)
		{
			printf("a is minimum");
		}
		else
		{
			printf("c is minimum");
		}
	}
	else
	{
		if(c<b)
		{
			printf("b is minimum");
		}
		else
		{
			printf("c is minimum");
		}
	}
}