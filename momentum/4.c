#include<stdio.h>
main()
{
	char days;
	printf("\nenter a days in alphabet:",days);
	scanf("%c",&days);
	switch(days)
	{
		case 'M':printf("\nMonday"); break;
		case 'T':printf("\nTuesday");break;
		case 'W':printf("\nWednesday");break;
		case 't':printf("\nthursday");break;
		case 'F':printf("\nFriday");break;
		case 'S':printf("\nSaturday");break;
		case 's':printf("\nsunday");break;
	}
}
