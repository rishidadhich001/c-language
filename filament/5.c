#include<stdio.h>
#include<string.h>
int main()
{


    char a[100]; 
    int i,digit=0;

    printf("Enter the string value : ");
    gets(a);

    for(i=0;a[i];i++)  
    {	
		if(a[i]>=48 && a[i]<=57)
        {
            digit++;
        }
	}
	if(digit==0)
    {
        printf("this string is not numeric ");
    }
    else
    {
    	printf(" this string is a numeric ");
	}
}


