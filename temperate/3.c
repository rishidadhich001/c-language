#include<stdio.h>
main()
{
	int n;
	int count=0;
	printf("Enter value n :");
	scanf("%d",&n);
	do
	{
		n/=10;
		++count;
	}while(n!=0);
	printf("number of digits : %d",count);
}
