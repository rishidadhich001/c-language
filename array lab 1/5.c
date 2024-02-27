#include<stdio.h>

main()
{
	int n,i;
	int a[n];
	int sum=0;
	printf("enter array size:",n);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter array element a[%d]:",i);
		scanf("%d",&a[i]);
	}	
	for(i=0;i<n;i++)
	{
		sum=sum + a[i];
	}
	printf("sum:%d",sum);
}
