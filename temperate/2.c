#include<stdio.h>
main()
{
	int n;
	int i=1;
	printf("Enter value n :");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d x %d = %d\n",n,i,n*i);
	}
}
