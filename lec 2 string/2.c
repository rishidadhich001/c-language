#include<stdio.h>
#include<string.h>
main()
{ 
	char name[100];
   printf("Enter string name :  ");
   gets(name);
   int n=strlen(name);
   int i,j,m=1;
   for(i=0;i<n;i++)
    { 
       for(j=i+1;j<n;j++)
       {
        	if(name[i]==name[j])
            {
                m++;
                name[j]=0;
            }
    	}
        if(name[i]!=0)
        {
            printf("%C -> %d\n",name[i],m);
        }
        m=1;
	}
}
