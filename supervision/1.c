#include<stdio.h>
main()
{
	FILE *fp;
	fp = fopen("even & odd.txt","w");
	
	int i;
	
	for(i=50;i<=70;i++)
	{
		if(i%2==1)
		{
			fprintf(fp,"even number %d\n",i);
		}
	}
	
	for(i=50;i<=70;i++)
	{
		if(i%2==0)
		{
			fprintf(fp,"odd number %d\n",i);
		}
	}
}
