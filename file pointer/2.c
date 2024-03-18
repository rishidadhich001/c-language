#include<stdio.h>
main()
{
	FILE *fp;
	fp = fopen("3 and 5 divisible.txt","w");
	
	int i;
	
	for(i=1;i<=50;i++)
	{
		if(i%5==0)
		{
			fprintf(fp,"5 : %d\n",i);
		}
	}
	
	for(i=1;i<=50;i++)
	{
		if(i%3==0)
		{
			fprintf(fp,"3 : %d\n",i);
		}
	}
}
