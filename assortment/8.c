#include<stdio.h>
main()
{
	int n,i,reverse;
	int a[n];
	printf("enter array size:",n);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter array element a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("reverse element:");
	for(i=n-1;i>=0;i--)
		{
			printf("%d",a[i]);
		}
	printf("\n");		
}
