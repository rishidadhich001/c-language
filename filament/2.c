#include<stdio.h>
#include<string.h>
main()
{
    char x[100],y[100];
    printf("Enter the string name of x :");
    gets(x);
    printf("Enter the string name of y : ");
    gets(y);
    int n=strlen(x);
    int i,j,status=0;
    for(i=0;i<=n;i++)
    {
    	status=0;
        for(j=0;j<n;j++)
        {
            if(x[i]==y[i])
            {
            	status=1;
            }
    	}
    }
    if(status==1)
	{
        printf("name are same");
	}
    else
    {
    	printf("name are not same");
	}
}

