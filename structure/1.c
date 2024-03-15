#include<stdio.h>
struct student
{
	int id;
 	char name[100];
	int age;
	char course[100];
	char city[100];
	int standard;
	char school[100];
};
main()
{
	int n;
	printf("enter your student details:");
	scanf("%d",&n);

	struct student pr[n];
	int i;
	for(i=0; i<n; i++)
	{
		printf("Enter st_id :");
		scanf("%d",&pr[i].id);
		
		printf("Enter st_name :");
		scanf(" %s",&pr[i].name);
		
		printf("Enter st_age :");
		scanf("%d",&pr[i].age);
		
		printf("Enter st_course :");
		scanf(" %s",&pr[i].course);
		
		printf("Enter st_city :");
		scanf(" %s",&pr[i].city);
		
		printf("Enter st_standard :");
		scanf("%d",&pr[i].standard);
		
		printf("Enter st_school :");
		scanf(" %s",&pr[i].school);	
		
		printf("\n\n");
	}
	for(i=0; i<n; i++)
	{
		
		printf(" pr_id       : %d \n",pr[i].id);
		printf(" pr_name     : %s \n",pr[i].name);
		printf(" pr_age      : %d \n",pr[i].age);
		printf(" pr_course   : %s \n",pr[i].course);
		printf(" pr_city     : %s\n" ,pr[i].city);
		printf(" pr_standard : %d \n",pr[i].standard);
	    printf(" pr_school   : %s \n",pr[i].school);
	    
	    printf("\n\n");
	}
}
