#include<stdio.h>
main()
{
	char ans;
	int total=0;
	printf("\t\t\t\t\t\tWelcome to the multiple choice question!");
	\\ q-1---------------------
	printf("\n\n1.Name the National fruit of India?");
	printf("\nA.Mango");
	printf("\nB.Orange");
	printf("\nC.Graps");
	printf("\nD.Banana");
	
	printf("\nEnter your choice in capital(A,B,C,D) :");
	scanf(" %c",&ans);
	
	switch(ans)
	{
		case'A':printf("Correct Answer!");
		total++;
		//Q-2-------------------
			printf("\n\n2.Name the place known as the Roof of the World?");
			printf("\nA.China");
			printf("\nB.Tibet");
			printf("\nC.India");
			printf("\nD.Asia");
			
			printf("\nEnter your Answer in capital(A,B,C,D) :");
			scanf(" %c",&ans);
			
			switch(ans)
			{
				case'A':printf("Incorrect Answer!");break;
				case'B':printf("Correct Answer!");
				total++;
				//Q-3-----------------------------
				printf("\n\n3. Name the smallest continent?");
				printf("\nA.China");
				printf("\nB.Tibet");
				printf("\nC.India");
				printf("\nD.Australia");
			
			printf("\nEnter your choice in capital(A,B,C,D) :");
			scanf(" %c",&ans);
			
			switch(ans)
			{
				    case'A':printf("Incorrect Answer!");break;
					case'B':printf("Incorrect Answer!");break;
					case'C':printf("Incorrect Answer!");break;
					case'D':printf("Correct Answer!");
					total++;
					//Q-4-------------------
					    printf("\n\n.Which continent is known as the ‘Dark’ continent?");
						printf("\nA.China");
						printf("\nB.Tibet");
						printf("\nC.Africa");
						printf("\nD.Australia");
			
						printf("\nEnter your choice in capital(A,B,C,D) :");
						scanf(" %c",&ans);
						
						switch(ans)
						{
							case'A':printf("Incorrect Answer!");break;
							case'B':printf("Incorrect Answer!");break;
							case'C':printf("Correct Answer!");
							total++;
							//Q-5------------------------
							printf("\n\n5.Which festival is called the festival of colours?");
							printf("\nA.Diwali");
							printf("\nB.Holi");
							printf("\nC.Navaratri");
							printf("\nD.Ramnavami");
							
							printf("\nEnter your choice in capital(A,B,C,D) :");
						    scanf(" %c",&ans);
						    
						    switch(ans)
						    {
						    	case'A':printf("Incorrect Answer!");break;
						    	case'B':printf("Correct Answer!");
						    	total++;
								break;
								case'C':printf("Incorrect Answer!");break;
								case'D':printf("Incorrect Answer!");break;
								default:printf("Invalid value");break;
							}
							
							break;
							case'D':printf("Incorrect Answer!");break;
							default:printf("Invalid value");break;
						}
					
					break;
					default:printf("Invalid value");break;
			}
				
				
				
				break;
				case'C':printf("Incorrect Answer!");break;
				case'D':printf("Incorrect Answer!");break;
				default:printf("Invalid value");break;
			}
		
		
		
		
		break;
		case'B':printf("Incorrect Answer!");break;
		case'C':printf("Incorrect Answer!");break;
		case'D':printf("Incorrect Answer!");break;
		default:printf("Invalid value");break;
		
	}
	\\ total score 
	printf("Total Score=%d/5",total);
	
}
