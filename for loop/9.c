#include<stdio.h>
main()
{
	int i=1,sum=1;
	int n;
	printf("Enter n :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum=sum*i;
	}
	printf("%d ",sum);
}
