#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter value of a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	//single
	int *x=&a;
	int *y=&b;
	int *z=&c;
	printf("Address of a: %d value at *x : %d\n",x,*x);
	printf("Address of b: %d value at *y : %d\n",y,*y);
	printf("Address of c: %d value at *z : %d\n\n",z,*z);
	
	//double
	int **m=&x;
	int **n=&y;
	int **o=&z;
	printf("Address of x: %d value at *m : %d\n",m,*m);
	printf("Address of y: %d value at *n : %d\n",n,*n);
	printf("Address of z: %d value at *o : %d\n\n",o,*o);
	
	//chain 
	int ***p=&m;
	int ***q=&n;
	int ***r=&o;
	printf("Address of m: %d value at  **p: %d\n",p,**p);
	printf("Address of n: %d value at  **q: %d\n",q,**q);
	printf("Address of o: %d value at  **r: %d\n\n",r,**r);
}
