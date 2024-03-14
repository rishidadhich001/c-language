#include<stdio.h>
#include<string.h>
main()
{
    char x[100];
    printf("Enter name : ");
    gets(x);
    int i,n=strlen(x);
    for(i=0;i<n;i++)
    {
        if(x[i]==32)
        {
            continue;
        }
        printf("%c",x[i]);
    }
}
