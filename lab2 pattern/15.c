#include<stdio.h>
main()
{
	char k;
	char i,j;
	for(i='E';i>='A';i--)
	{	
		for(k=i;k<='E';k++)
		{
			printf("  ");
		}
		for(j='A';j<=i;j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
}
