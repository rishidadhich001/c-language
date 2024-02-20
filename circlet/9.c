#include<stdio.h>

main()
{
	int i,j,k,m;
	for(i=5;i>=1;i--)
	{
		for(k=i;k>1;k--)
		{
			printf("  ");
		}
		for(j=5;j>i;j--)
		{
			printf("%d ",j);
		}
		for(m=i;m<=5;m++)
		{
			printf("%d ",m);
		}
		printf("\n");
	}
	
}
