#include<stdio.h>
main()
{
	int n;
	printf("enter array a size n:",n);
	scanf("%d",&n);
	int a[n][n];
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
			printf("%d ",a[i][j]);		
		}
	}
}
