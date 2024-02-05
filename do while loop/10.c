#include<stdio.h>
main()
{
	int n,x=1;
	printf("Enter a value n:");
	scanf("%d",&n);
	do
	{
		
		printf("%d x %d = %d\n",n,x,n*x);
		x++;
	}while(x<=10);
}
