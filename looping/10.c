#include<stdio.h>
main()
{
	int n,x=1;
	printf("Enter a value n:");
	scanf("%d",&n);
	while(x<=10)
	{
		
		printf("%d x %d = %d\n",n,x,n*x);
		x++;
	}
}
