#include<stdio.h>
main()
{
	int n;
	printf("Enter value of n:");
	scanf("%d",&n);
	int x[n];
	int i;
	int *square=x;
	
	for(i=0; i<n; i++)
	{
		printf("Enter a value of x[%d] :",i);
		scanf("%d",&x[i]);
	}
	for(i=0; i<n; i++)
	{
		*square = (*square) * (*square);
		square++;
		square==x[i];
	}
	
	for(i=0; i<n; i++)
	{
		printf("%d ", x[i]);
	}
}
