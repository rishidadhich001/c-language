#include<stdio.h>
main()
{
	int i=1,sum=0;
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	start:
	sum=sum+i;
	i++;
	if(i<=n)
	{
		goto start;
	}
	printf("%d",sum);
}
