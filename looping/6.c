#include<stdio.h>
main()
{
	int n;
	printf("Enter a value n:");
	scanf("%d",&n);
	
	int x=1;
	while(n>=x)
	{
		if(n%2==0)
		{
			printf("%d ",n);
		}
		n--;
	}
}
