#include<stdio.h>
main()
{
	int BaseSalary=100;
	int HRA=10;
	int DA=1;
	int TA=12;
	int GrossSalary;
	GrossSalary = BaseSalary+HRA+DA+TA*DA;
	printf("GrossSalary:%d",GrossSalary);
}