#include<stdio.h>
main()
{
	char k;
	char i,j;
	for(i='A';i<='E';i++)
	{	
		for(k=i;k>='A';k--)
		{
			printf("  ");
		}
		for(j=i;j<='E';j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
}
