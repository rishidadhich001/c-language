#include<stdio.h>

main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(i==1&&j==4)
			{
				printf("*");
			}
			else if(i==2&&(j==3||j==5))
			{
				printf("*");
			}
			else if(i==3&&(j==2||j==6))
			{
				printf("*");
			}
			else if(i==4&&(j==1||j==7))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
