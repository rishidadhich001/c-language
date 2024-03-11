#include<stdio.h>

main()
{
	int n;
	printf("enter the value of square:");
	scanf("%d",&n);
	int i;
	
	for(i=0;i<n;i++)
	{
		if(i*i==n)
		{
			printf("square root : %d",i);
		}
	}
}
