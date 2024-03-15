#include<stdio.h>
struct student
{
	int id;
 	char name[100];
	int age;
	char role[100];
	char city[100];
	int experience;
	char company_name[100];
};
main()
{
	int n;
	printf("enter your details :");
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
		
		printf("Enter st_role :");
		scanf(" %s",&pr[i].role);
		
		printf("Enter st_city :");
		scanf(" %s",&pr[i].city);
		
		printf("Enter st_experience :");
		scanf("%d",&pr[i].experience);
		
		printf("Enter st_company_name :");
		scanf(" %s",&pr[i].company_name);	
		
		printf("\n\n");
	}
	for(i=0; i<n; i++)
	{
		
		printf(" pr_id       : %d \n",pr[i].id);
		printf(" pr_name     : %s \n",pr[i].name);
		printf(" pr_age      : %d \n",pr[i].age);
		printf(" pr_role   : %s \n",pr[i].role);
		printf(" pr_city     : %s\n" ,pr[i].city);
		printf(" pr_experience : %d \n",pr[i].experience);
	    printf(" pr_company_name   : %s \n",pr[i].company_name);
	    
	    printf("\n\n");
	}
}
