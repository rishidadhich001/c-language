#include<stdio.h>
main()
{
	int i,j,a=1;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j%2==0)
			{
				printf("0 ");
			}
			else
			{
				printf("1 ");
			}
		}	
		printf("\n");
	}
}
