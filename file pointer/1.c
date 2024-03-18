#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp,*op;
	fp=fopen("rd.txt","r");
	op=fopen("rishi.txt","w");
	int i;
	char ch;
	
	ch = fgetc(fp);
	while(ch!=EOF)
	{
		fputc(ch,op);
		ch = fgetc(fp);
	}
	
	return 0;
}
