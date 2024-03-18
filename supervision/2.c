#include<stdio.h>
//Enter details of Student 1:
//Roll no => 121
//Name => Raj Patel
//Chemistry => 95
//Mathematics => 90
//Physics => 88
struct student
{
	int roll_no;
 	char name[100];
	int chemistry;
	int mathematics;
	int physics;
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
		printf("Enter st_roll_no :");
		scanf("%d",&pr[i].roll_no);
		
		printf("Enter st_name :");
		scanf(" %s",&pr[i].name);
		
		printf("Enter st_chemistry :");
		scanf("%d",&pr[i].chemistry);
		
		printf("Enter st_mathematics :");
		scanf(" %d",&pr[i].mathematics);
		
		printf("Enter st_physics :");
		scanf(" %d",&pr[i].physics);
			
		printf("\n\n");
	}
	for(i=0; i<n; i++)
	{
		
		printf(" pr_roll no  : %d \n",pr[i].roll_no);
		printf(" pr_name     : %s \n",pr[i].name);
		printf(" pr_chemistry : %d \n",pr[i].chemistry);
		printf(" pr_mathematics : %d \n",pr[i].mathematics);
		printf(" pr_physics     : %d\n" ,pr[i].physics);
	    
	    printf("\n\n");
	}
}
