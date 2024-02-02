#include<stdio.h>
main()
{
	int n,sum=1;
	printf("Enter a value n:");
	scanf("%d",&n);
	int x=1;
	while(x<=n)
	{
		sum=sum*x;
		x++;
	}
	printf("%d ",sum);
	
}
