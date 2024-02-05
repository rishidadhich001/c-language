#include<stdio.h>
main()
{
	int i=1;
	int n;
	printf("enter n :");
	scanf("%d",&n);
	do
	{
		if(n%2==0)
		{
			printf("%d ",n);
		}
		n--;
	}while(n>=i);

	
}
