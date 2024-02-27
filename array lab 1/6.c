#include<stdio.h>
main()
{
	int n,i,j;
	int a[n];
	printf("enter array size:",n);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter array element a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d x %d = %d \n",a[i],j,a[i]*j);
		}
	}		
}
