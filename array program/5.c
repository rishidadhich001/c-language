#include<stdio.h>
main()
{	
	int n,m;
	printf("Enter a value of n:");
	scanf("%d",&n);
	printf("Enter a value of m :");
	scanf("%d",&m);
	
	int x[n][m];
	int i,j;
	int sum=0;
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("Enter value of a[%d][%d] :",i,j);
			scanf(" %d",&x[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			if (i==0 || i==n-1 || j==0 || j==m-1)
			{

               printf(" %d",x[i][j]);
               sum=sum+x[i][j];
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("sum : %d",sum);
}
