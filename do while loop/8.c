#include<stdio.h>
main()
{
	int n,sum=0;
	printf("Enter a value n:");
	scanf("%d",&n);
	int x=1;
	do
	{
		sum=sum+x;
		x++;
	}while(x<=n);
	printf("%d",sum);
	
}
