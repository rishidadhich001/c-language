#include<stdio.h>
#include<string.h>
main()
{
	int i,status=0,x;
	char gmail[20],password[32];
	printf("Enter your gmail id :");
	gets(gmail);
	int m= strlen(gmail);
	
	if(m>=15)
	{
		for(i=0;i<m;i++)
		{
			//for @
            if(gmail[i]==64)
            {
                status=1;
            }
		}
		if(status==1)
        {
            status=0;
            for(i=x+1;i<m;i++)
            {
            	//for gmail.com
                if(gmail[i]=='g')
                {
                    i++;
                    if(gmail[i]=='m')
                    {
                        i++;
                        if(gmail[i]=='a')
                        {
                            i++;
                            if(gmail[i]=='i')
                            {
                                i++;
                                if(gmail[i]=='l')
                                {
                                    i++;
                                    if(gmail[i]=='.')
                                    {
                                        i++;
                                       if(gmail[i]=='c')
                                        {
                                            i++;
                                            if(gmail[i]=='o')
                                            {
                                                i++;
                                                if(gmail[i]=='m')
                                                {
                                                    status=1;
                                                    break;
                                                }
                                            } 
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if(status==1)
            {
                status=0;
                for(i=0;i<m;i++)
                {
                	// for small letter and speial characters
                    if( ( gmail[i] >= 97 && gmail[i] <=122 ) || ( gmail[i]==64 ) || ( gmail[i]==46 ) || (gmail[i] >= '0' && gmail[i] <= '9'))
                    {
                        status=1;
                    }
                }
                	if(status==1)
                	{
                		for(i=0;i<m;i++)
                		{
                			if(gmail[i] >= 65 && gmail[i] <=90)
                			{
                				status=0;
							}
						}
						if(status==1)
                {
                    status=0;
                    printf("your gmail is valid");
                    printf("\nEnter your gmail id password : ");
                    gets(password);
                    m = strlen(password);
                    
                    if(m>=8 && m<=32)
                    {
                        for(i=0;i<m;i++)
                        {
                        	// for digit
                            if(password[i] >= '0' && password[i] <= '9')
                            {
                                status=1;
                            }
                        }
                        if(status==1)
                        {
                            status=0;
                            for(i=0;i<m;i++)
                            {
                            	// for small character
                                if((password[i]>=33 && password[i]<=47) || (password[i]>=58 && password[i]<=64))
                                {
                                    status=1;
                                }
                            }
                            if(status==1)
                            {
                                for(i=0;i<m;i++)
                                {
                                	// for small character
                                    if(password[i] >= 97 && password[i] <=122)
                                    {
                                        status=1;
                                    }
                                }
                                if(status==1)
                                {
                                    status=0;
                                    for(i=0;i<m;i++)
                                    {
                                    	//for capital character
                                        if(password[i] >= 65 && password[i] <=90)
                                        {
                                            status=1;
                                        }
                                    }
                                    if(status==1)
                                    {
                                        printf("your password is valid");
                                    }
                                    else
                                    {
                                        printf("minimum 1 capital character !");
                                    }
                                }
                                else
                                {
                                    printf("minimum 1 small character !");
                                }
                            }
                            else
                            {
                                printf("minimum 1 special character !");
                            }
                        }
                        else
                        {
                            printf("minimum 1 digit !");
                        }
                    }
                    else
                    {
                        printf("minimum length 8 and maximum length 32 !");
                    }
                }
                else
                {
                    printf("only large letter are not available !");
                }
            }
            else
            {
                printf("please' enter gmail.com !");
            }
        }
        else
        {
            printf("missing of @");
        }
    }
}
else
    {
        printf("minimum length 7 !");
    }	
}
