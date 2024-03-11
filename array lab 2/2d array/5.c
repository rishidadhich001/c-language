#include<stdio.h>
main()
{
	int n;
	int m;
	printf("enter array a size n:",n);
	scanf("%d",&n);
	printf("enter array a size m:",m);
	scanf("%d",&m);
	int a[n][m];
	int i,j;
	
	
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
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	int sum=0,z;
	for(z=0;z<m;z++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(j==z)
				{
					sum=sum+a[i][j];	
				}
			}
		}
		printf("%d ",sum);
		sum=0;
	}
}
