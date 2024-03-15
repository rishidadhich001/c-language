#include<stdio.h>
main()
{
	char name[50];
	printf("enter a name : ");
	gets(name);
	int a=0;
	int i;
	for(i=0;name[i]!='\0';i++)
	{
		a++;
	}
	int *r=&a;
	printf("%d ",*r);
}
