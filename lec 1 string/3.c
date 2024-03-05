#include<stdio.h>
#include<string.h>
main()
{
	int i,n;
	char name[20];
	printf("enter a name :");
	gets(name);
	n=strlen(name);
	
	printf("%d",n);
}
