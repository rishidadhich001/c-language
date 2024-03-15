#include<stdio.h>

void cube(int *a,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",(*a) * (*a) * (*a));
            *a=*a+1;
        }
    }
}

main()
{
    int n,i,j;
    printf("entre your value of n : ");
    scanf("%d",&n);
    int b[n][n];
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("enter your value of a[%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    
    int *a = &b[0][0];
    
    cube(a,n);
}
