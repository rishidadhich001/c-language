#include<stdio.h>
main()
{
	int n;
	printf("Enter a value of n :");
	scanf("%d",&n);
	int x[n];
	int i;
	//insert
	for(i=0; i<n; i++)
	{ 
		printf("Enter value of a[%d] :",i);
		scanf("%d",&x[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("%d ",x[i]);
	}
	printf("\n");
	//update
	int m;
	printf("Enter index value of m :");
	scanf("%d",&m);
	
	for(i=0; i<=m; i++)
	{
		if(i==m)
		{
			printf("Enter a update value :");
			scanf("%d",&x[i]);
		}
	}
	for(i=0; i<n; i++)
	{
		printf("%d ",x[i]);
	}
	printf("\n");
	//delete
	int y;
	printf("Enter index value of y :");
	scanf("%d",&y);
	
	for(i=y; i<n; i++)
	{
		x[i]=x[i+1];
	}
	 x[n-1]='\0';
	for(i=0; i<n-1; i++)
	{
		printf("%d ",x[i]);
	}
}
