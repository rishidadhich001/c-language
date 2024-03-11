#include<stdio.h>

int cube(int n)
{
    int solution=1;
    solution=n*n*n;
    return solution;
}

main()
{
    int n;
    printf("Enter the value : ");
    scanf("%d",&n);
    int a = cube(n);
    printf("%d",a);
}
