#include<stdio.h>
#include<string.h>
int main()
{
    char x[100]; 
    int i,alph=0,digit=0,special=0;

    printf("Enter the string value : ");
    gets(x);

    for(i=0;x[i];i++)  
    {
        if((x[i]>=65 && x[i]<=90)|| (x[i]>=97 && x[i]<=122) )
        {
          alph++;
        }
        else if(x[i]>=48 && x[i]<=57)
        {
            digit++;
        }
		 else
        {
			special++;
     	}
	}	
    printf("Alphabets = %d\n",alph);
    printf("Digits = %d\n",digit);
    printf("special character = %d\n",special);
    
}



