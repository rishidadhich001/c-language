#include<stdio.h>
main()
{
	int i;
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		if(i==n)
		{
			continue;
		}
		printf("%d ",i);
	}
}
