#include<stdio.h>

main()
{
	int i,j;
	
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1 && (j==1||j==5))
			{
				printf("*  ");
			}
			else if(i==2 && (j==1||j==5))
			{
				printf("*  ");
			}
			else if(i==3 && (j==1||j==5))
			{
				printf("*  ");
			}
			else if(i==4 && (j==1||j==5))
			{
				printf("*  ");
			}
			else if(i==5 && (j==1||j==5))
			{
				printf("*  ");
			}
			else if(i==6 && (j==1||j==5))
			{
				printf("*  ");
			}
			else if(i==7 && (j==2||j==3||j==4))
			{
				printf("* ");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
