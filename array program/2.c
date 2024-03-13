#include<stdio.h>
main()
{     
    int x[]={20,500,90,80,40};
    int n=sizeof(x)/sizeof(x[0]);
    
    int large=x[0];
    int seclarge=x[1];
    int i;
    for(i=0; i<n; i++)
    {
    	if(x[i]>large)
    	{
    		seclarge=large;
    		large=x[i];
		}
		else if(x[i]>seclarge && x[i]!=large)
		{
			seclarge=x[i];
		}
	}
 	printf("%d",seclarge);
}
