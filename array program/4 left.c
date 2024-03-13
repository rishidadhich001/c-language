#include<stdio.h>
main()
{
	int n;
	printf("Enter a value of n :");
	scanf("%d",&n);
	
    int x[n];
    int i,j,temp;
    for(i=0; i<n; i++)
    {
    	printf("enter value of x[%d] :",i);
    	scanf("%d",&x[i]);
	}
	int m;
		printf("enter a value of m :");
    	scanf("%d",&m);
    	
    for(i=1; i<=m; i++)
    {
    	temp=x[n-1];
    	for(j=n; j>0; j--)
    	{
    		x[j]=x[j-1];
		}
		x[0]=temp;
	}
	for(i=0; i<n; i++)
	{
		printf("%d ",x[i]);
	}
}
