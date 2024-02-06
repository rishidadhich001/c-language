#include<stdio.h>
main()
{
	int i=1;
	int n;
	printf("Enter n :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		{
			printf("%d ",i);
		}
	}
}
