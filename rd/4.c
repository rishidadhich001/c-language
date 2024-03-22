#include<stdio.h>
 int main()
{
	int i,n,a[n];
	int *square=&a[n];
	
	printf("enter value n :");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("enter value a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		printf("%d",&a[i]);
	}
}