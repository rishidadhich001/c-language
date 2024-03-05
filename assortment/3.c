#include<stdio.h>
main()
{
	int n,i,j,count=0;
	int a[n];
	printf("enter array a size:",n);
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter array element a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				a[i]='\0';
				count++;
			}		
    	}
	}
	printf("%d",count);
	
}
