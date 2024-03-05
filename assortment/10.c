#include<stdio.h>
main()
{
	int n;
	
	printf("enter array a size n:",n);
	scanf("%d",&n);
	int a[n][n];
	
	int i,j,sum=0;
	int x=n-1;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter array element a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
			
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				sum=sum+a[i][x];
				x--;
			}		
    	}
	}
	printf("%d ",sum);
}
