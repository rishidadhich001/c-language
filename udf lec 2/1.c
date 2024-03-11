#include<stdio.h>

int sum_of_array(int a[])
{
	int i,sum=0;
	for(i=0;a[i]!='\0';i++)
	{
		sum=sum+a[i];
	}
	return sum;
}
main()
{
	int n,i;
	printf("enter your value:",n);
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("enter your value a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	int sum=sum_of_array(a);
	printf("%d",sum);
	
}
