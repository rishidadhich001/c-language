#include<stdio.h>
main()
{
	int i=1;
	int n;
	printf("Enter n :");
	scanf("%d",&n);
	
	for(n;n>=i;n--)
	{
		if(n%2==0)
		{
			printf("%d ",n);
		}
	}
}
