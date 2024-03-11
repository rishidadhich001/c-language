#include<stdio.h>
main()
{
	int n,i,j,temp=0;
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
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}		
    	}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
