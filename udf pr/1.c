#include<stdio.h>

int Add(int x,int y)
{
    int sol;
    sol=x+y;
    return sol;
}

int subtract(int x,int y)
{
    int sol;
    sol=x-y;
    return sol;
}

int multiply(int x,int y)
{
    int sol;
    sol=x*y;
    return sol;
}

int divide(int x,int y)
{
    int sol;
    sol=x/y;
    return sol;
}

int module(int x,int y)
{
    int sol;
    sol=x%y;
    return sol;
}

main()
{
    int i;
    for(i=1;i<=1;i++)
    {
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for module\n");
        printf("Press 0 for Exit\n\n");
        
        int x,y;
        printf("enter a value of x : ");
        scanf("%d",&x);
        printf("enter a value of y : ");
        scanf("%d",&y);
        
        char n;
        printf("enter 1 2 3 4 5 0 : ");
        scanf(" %c",&n);
        
        switch(n)
        {
            case '1' :{
                        int z=Add(x,y);
                        printf("your sol  %d\n\n",z);
                        i--;
                      }
            break;
            
            case '2' :{
                        int z=subtract(x,y);
                        printf("your sol %d\n\n",z);
                        i--;
                      }
            break;
            
            case '3' :{
                        int z=multiply(x,y);
                        printf("your sol %d\n\n",z);
                        i--;
                      }
            break;
            
            case '4' :{
                        int z=divide(x,y);
                        printf("your sol %d\n\n",z);
                        i--;
                      }
            break;
            
            case '5' :{
                        int z=module(x,y);
                        printf("your sol %d\n\n",z);
                        i--;
                      }
            break;
            
            case '0' :{
                        printf("thank you for exit !");
                        i++;
                      }
                      break;
            default : printf("1 2 3 4 5 0 !\n\n");
        }
    }
}
