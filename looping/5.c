#include<stdio.h>
main()
{
	int n;
	printf("Enter a value n:");
	scanf("%d",&n);
	
	int x=1;
	while(x<=n)
	{
		if(x%2==1)
		{
			printf("%d ",x);
		}
		x++;
	}
}
