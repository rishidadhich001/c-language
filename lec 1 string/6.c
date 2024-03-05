#include<stdio.h>
#include<string.h>
main()
{
	int i,l,n;
	char name[20];
	printf("enter a name :");
	gets(name);
	n=strlen(name);
	 
	 if(name[0]>=97 && name[0]<=122)
	{
		name[i]-=32;
	}
	for(i=0,l=0;i<n,l<n;i++,l++)
	{
		if(name[i]==32)
		{
			i++;
			if(name[i]>=97 && name[i]<=122)
			{
				name[i]-=32;
			}
		}	
	}
	puts(name);
}
