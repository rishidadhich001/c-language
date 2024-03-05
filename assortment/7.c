#include<stdio.h>
main()
{
	int n,m;
	
	printf("enter array a size n:",n);
	scanf("%d",&n);
	printf("enter array a size m:",m);
	scanf("%d",&m);
	int a[n][m];
	
	int i,j,max=1;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("enter array element a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
			}		
    	}
	}
	printf("%d ",max);
}
