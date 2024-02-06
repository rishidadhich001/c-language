#include<stdio.h>
main()
{
	int i=1,sum=0;
	int n;
	printf("Enter n :");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("%d x %d = %d \n",n,i,n*i);
	}
	
}
