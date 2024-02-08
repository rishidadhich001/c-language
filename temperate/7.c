#include<stdio.h>
main()
{
	int n,sum=0,check=0,i;
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		check=0;
		if(i%2==0)
		{
			check=1;
			sum=sum+i;
		}
		if(check==1)
		{
			printf("%d\n",i);
		}
	}
	printf("sum is : %d",sum);
}
