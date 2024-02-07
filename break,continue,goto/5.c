#include<stdio.h>
main()
{
	int i=2,j=3,check=0,sum=0;
	printf("1\n2\n");
	for(j=3;j<=50;j++)
	{
		check=0;
		for(i=2;i<j;i++)
		{
			if(j%i==0)
			{
				check=1;
				break;
			}
			
		}
		if(check==0)
			{
				printf("%d\n",j);
				sum=sum+j;
			}
	}
	printf(" sum is :%d",sum);
}
