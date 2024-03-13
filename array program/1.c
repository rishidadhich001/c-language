#include<stdio.h>
main()
{
	int n;
	printf("Enter a size of array :");
	scanf("%d",&n);
	
	int x[n];
	int i;
	for(i=0; i<n; i++)
	{
		printf("Enter value of a[%d] :",i);
		scanf("%d",&x[i]);
	}
	int y;
	for(i=0; i<n; i++)
	{
		if(x[i]%2==1)
		{
			y=x[i];
			printf("%d ",y);
		}		
	}

}
