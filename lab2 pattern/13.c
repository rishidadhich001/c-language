#include<stdio.h>
main()
{
	char k;
	char i,j;
	for(i='A';i<='E';i++)
	{	
		for(k=i;k<='E';k++)
		{
			printf("  ");
		}
		for(j=i;j>='A';j--)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
}
