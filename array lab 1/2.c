#include<stdio.h>

main()
{
	int n,i;
	int a[n];
	int average,sum=0;
	printf("enter array size:",n);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter array element a[%d]:",i,a[i]);
		scanf("%d",&a[i]);
		sum=sum+a[i];
		average=sum/n;
	}	
	
	printf("average of an array: %d",average);
	
}
