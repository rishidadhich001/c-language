#include<stdio.h>
main()
{
	char n;
	printf("enter the value of n :");
	scanf("  %c",&n);
	if( n>='a' && n<='z' || n>='A' && n<='Z' )
	{
		printf("Alphabet");
	}
	else if(n>='0' && n<='9')
	{
		printf("Digit");
	}
	else
	{
		printf("special charecter");
	}
}
