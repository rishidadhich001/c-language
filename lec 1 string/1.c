#include<stdio.h>
#include<string.h>
main()
{
	int i,n;
	char name[20];
	printf("enter a name :");
	gets(name);
	n=strlen(name);
	 
	for(i=0;i<n;i++)
	{
		if(name[i]>=65 && name[i]<=90)
		{
			name[i]+=32;
		}
	}
	puts(name);
}
