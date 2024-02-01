#include<stdio.h>
main()
{
	int bio,chem,phy,math,comp;
	int sum;
	float per;
	
	printf("enter the bio marks:");
	scanf("%d",&bio); 
	
	printf("enter the chem marks:");
	scanf("%d",&chem); 
	
	printf("enter the phy marks:");
	scanf("%d",&phy); 
	
	printf("enter the math marks:");
	scanf("%d",&math); 
	
	printf("enter the comp marks:");
	scanf("%d",&comp);
	
	sum=bio+chem+phy+math+comp;
	printf("total sum is=%d\n",sum); 
	
	per=sum/5;
	printf("total percentage is=%.2f\n",per);
	
	if(per<=35)
	{
		printf("Failed!");
	}	
	else if(per>=40 && per<=50)
	{
		printf("F Grade!");
	}
	else if(per>=50 && per<=60)
	{
		printf("E Grade!");
	}
	else if(per>=60 && per<=70)
	{
		printf("D Grade!");
	}
	else if(per>=70 && per<=80)
	{
		printf("C Grade!");
	}
	else if(per>=80 && per<=90)
	{
		printf("B Grade!");
	}
	else 
	{
		printf("A+ Grade!");
	}
}
