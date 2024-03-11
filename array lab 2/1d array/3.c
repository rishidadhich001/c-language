#include<stdio.h>

main()
{
	int n,i;
	int s;
	printf("enter array a size:",n);
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("enter array element a[%d]:",i);
		scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++)
	{
		s=a[i]*a[i];
		printf(" square : %d ",s);
	}
}
