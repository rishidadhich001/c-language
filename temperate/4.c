#include<stdio.h>
main()
{
	int n,sum=0;
	printf("Enter value n :");
	scanf("%d",&n);
	sum=n%10;
	while(n>9)
	{
		n=n/10;
	}
	sum=sum+n;
	printf("sum of first and last digit is : %d",sum);
}
