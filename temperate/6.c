#include<stdio.h>
main()
{
	int n;
	int i=10;
	printf("Enter value n :");
	scanf("%d",&n);
	for(i=10;i>=1;i--)
	{
		printf("%d x %d = %d\n",n,i,n*i);
	}
}
