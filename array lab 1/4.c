#include<stdio.h>

main()
{
	int n,i;
	int a[n];
	printf("enter array size:",n);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter array element a[%d]:",i,a[i]);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("a[%d]:%d\n",i,a[i]);
	}
}
