#include<stdio.h>

main()
{
	int start;
	int end;
	printf("enter the start number :");
	scanf("%d",&start);
	printf("enter the end number :");
	scanf("%d",&end);
	int n=(end-start)/4+1;
	printf("expected years %d :",n);
	int leap[n];
	int i,y=0;
	
	for(i=start;i<=end;i++)
	{
		if(i%4==0)
		{
			leap[y]=i;
			y++;
		}		
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",leap[i]);
	}
}
