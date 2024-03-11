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
	int i,j,sum,average;
	
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
			sum=sum+a[i][j];		
		}
	}
	int size=sizeof(a)/sizeof(a[0][0]);
	printf("size is : %d\n",size);
	printf("total sum is : %d\n",sum);
	average=sum/size;
	printf("average is: %d\n",average);
	
}
