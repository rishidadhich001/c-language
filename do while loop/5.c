#include<stdio.h>
main()
{
	int i=1;
	int n;
	printf("enter n :");
	scanf("%d",&n);
	do
	{
		if(i%2==1)
		{
			printf("%d ",i);
		}
		i++;
	}while(i<=n);

	
}
