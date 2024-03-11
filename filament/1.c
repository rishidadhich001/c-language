#include<stdio.h>
#include<string.h>

main()
{
	char a[100],b[100];
	printf("Enter the string name : ");
    gets(a);
    int i,j,count=0;
	int n;
    for(i=0;a[i]!='\0';i++)
    {
      n++;
    }
    for(i=n-1;i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=b[j])
        {
            count=1;
            break;
        }
    }
    if(count==1)
    {
        printf("it is a palindrome ");
    }
    else
    {
		printf("it is not a palindrome ");
	}
}
