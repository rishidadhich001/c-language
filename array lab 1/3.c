#include<stdio.h>

main()
{
	int n,i;
	int a[n],b[n];
	int average,sum=0;
	printf("enter array size:",n);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter array element a[%d]:",i);
		scanf("%d",&a[i]);
	}	
	for(i=0;i<n;i++)
	{
		printf("a[%d] : %d\n",i,a[i]);
	}	
	for(i=0;i<n;i++)
	{
		printf("enter array element b[%d]:",i);
		scanf("%d",&b[i]);
	}	
	for(i=0;i<n;i++)
	{
		printf("b[%d] : %d\n",i,b[i]);
	}	
	printf("sum is :");
	for(i=0;i<n;i++)
	{
		sum=a[i]+b[i];
		printf(" %d",sum);
	}
}
