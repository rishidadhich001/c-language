#include<stdio.h>

int add(int x,int y)
{
    int sol=x+y;
    printf("%d",sol);
}

int subtract(int x,int y)
{
    int sol=x-y;
    printf("%d",sol);
}

int multiply(int x,int y)
{
    int sol=x*y;
    printf("%d",sol);
}

int divide(int x,int y)
{
    int sol=x/y;
    printf("%d",sol);
}

void enter_value()
{
    int x,y;
    printf("enter value of x : ");
    scanf("%d",&x);
    printf("enter value of y : ");
    scanf("%d",&y);
    
    char m;
    printf("entre + - * / : ");
    scanf(" %c",&m);
    
    switch(m)
    {
        case '+' : add(x,y);
        break;
        case '-' : subtract(x,y);
        break;
        case '*' : multiply(x,y);
        break;
        case '/' : divide(x,y);
        break;
        default : printf("only + - * / ");
    }
    printf("\n\n");
    enter_value();
}

main()
{
    enter_value();
}
