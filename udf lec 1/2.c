#include<stdio.h>

int divide(int n)
{
    int status = 0;
    if(n%3==0 || n%5==0)
    {
        status = 1;
    }
    return status;
}

main()
{
    int n;
    printf("Enetr your value : ");
    scanf("%d",&n);
    int a = divide(n);
    
    if(a==1)
    {
        printf("number is divide by both 3 & 5.");
    }
    else
    {
        printf("number is not divide by both 3 & 5.");
    }
}
