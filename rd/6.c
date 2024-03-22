#include<stdio.h>
main()
{	int i;
	char s1,s2,s3;
	char c1,c2,c3;
	FILE *fp;
	fp=fopen("data.txt","w");
	
	printf("enter name of first student:",s1);
	scanf("%s",&s1);
	printf("enter first student course:",c1);
	scanf("%s",&c1);
	printf("\n");
	printf("enter name of second student:",s2);
	scanf("%s",&s2);
	printf("enter second student course:",c2);
	scanf("%s",&c2);
	printf("\n");
	printf("enter name of third student:",s3);
	scanf("%s",&s3);
	printf("enter third student course:",c3);
	scanf("%s",&c3);
	printf("\n");
	for(i=1;i<=3;i++)
	{
		fprintf(fp,"%s%s%s",s1,s2,s3);
	}
	
	
	
	
}