#include<stdio.h>
main()
{
	int i=1;
	int n;
	printf("enter n :");
	scanf("%d",&n);
	do
	{
		printf("%d ",i);
		i++;
	}while(i<=n);
}
