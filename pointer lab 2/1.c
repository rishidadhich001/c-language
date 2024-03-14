#include<stdio.h>
main()
{
	int n;
	printf("enter a value n:");
	scanf("%d",&n);
	int a[n];
	int *r=a[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf("enter a value a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",*&a[i]);
	}
}
