#include<stdio.h>
main()
{
	int n,m,i,j=0;
	int k=n+m;
	int a[n],b[m],c[k];
	printf("enter array a size:",n);
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter array element a[%d]:",i);
		scanf("%d",&a[i]);
		c[j]=a[i];
		j++;
	}
	printf("enter array b size:",m);
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		printf("enter array element b[%d]:",i);
		scanf("%d",&b[i]);
		c[j]=b[i];
		j++;
	}
	for(i=0;i<k;i++)
	{
		printf("%d ",c[i]);
	}
}
