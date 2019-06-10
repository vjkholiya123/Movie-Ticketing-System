#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int CALCULATE(int a,int b,int c) //function for calculating fare and generating ticket no
{
	int fare;
	char ch;
		if(b==1)
	{
	fare=a*200;
	}
	else
	{
	fare=a*150;
	}
	
	printf("\n\n\n\t\tYour total fare is: Rs.%d",fare);
	int tno=(fare*1234*a);
	printf("\n\n\t\tARE YOU SURE YOU WANT TO BOOK TICKET(Y/N)");
	scanf(" %c",&ch);
	
	if(ch=='Y' || ch=='y')
	{
	printf("\n\n\n\t\tCONGRATS YOUR TICKET HAS BEEN BOOKED ");
	printf("\n\t\tYOUR TICKET NO IS %d",tno);
	printf("\n\t\tNOTE DOWN YOUR TICKET NO FOR FUTURE REFERENCE....");
	}
	
	else if (ch=='N' || ch=='n')
	{
	printf("\n\n\t\tTICKET BOOKING CANCELLED BY USER");
	}
	
	else
	{
	printf("\n\n\t\tWRONG OPTION");
	exit(0);
	}
}

void TICKETBUK()          //function for booking the ticket
{
	int a,n,b,c;
	printf("\n\n\t\t1)HOLLYWOOD ");
	printf("\n\t\t2)BOLLYWOOD ");
	scanf("%d",&b);
	switch (b)
	{
		case 1:
			printf("\n\n\t\tChoose the movie from the list -----");
			printf("\n\n\t\t\t1 JACK REACHER:NEVER GO BACK ");
			printf("\n\n\t\t\t2 DOCTOR STRANGE ");
			printf("\n\n\t\t\t3 MOANA ");
			scanf("%d",&c);
			break;
		
		case 2:
			printf("\n\n\t\tChoose the movie from the list -----");
			printf("\n\t\t\t1 JOLLY LLB 2 ");
			printf("\n\t\t\t2 RAEES ");
			printf("\n\t\t\t3 BADRINATH KI DULHANIA ");
			scanf("%d",&c);
			break;
		default:
		printf("\n\n\t\twrong choice");	
		exit(0);		
	}	
	ABC:
	printf("\n\n\t\tENTER THE NO OF TICKETS TO BE BOOKED(max 20) = ");
	scanf("%d",&a);
	if(a<=20)
	
	{
	int tno11=CALCULATE(a,b,c);
	}
	else
	{
	printf("\n\n\t\tPLEASE BOOK LESS THAN 20 TICKETS");
	goto ABC;
	}
}

void KNOWFARE()				//function for checking the fare of movies
{
	int j;
	printf("\n\n\t\t1)HOLLYWOOD ");
	printf("\n\n\t\t2)BOLLYWOOD ");
	scanf("%d",&j);
	if(j==1)
	{
		printf("\n\n\t\tUPCOMING HOLLYWOOD MOVIES AND THEIR FARE ARE :");
		printf("\n\n\t\t\t1 JACK REACHER:NEVER GO BACK \n\n\t\t\tFARE IS RS.200 ");
		printf("\n\n\n\t\t\t2 DOCTOR STRANGE \n\n\t\t\tFARE IS RS.200");
		printf("\n\n\n\t\t\t3 MOANA \n\n\t\t\tFARE IS RS.200");
	}
	
	else if(j==2)
	{
		printf("\n\n\t\tUPCOMING BOLLYWOOD MOVIES ARE :");
		printf("\n\n\t\t\t1 JOLLY LLB 2 \n\n\t\t\tFARE IS RS.150");
		printf("\n\n\t\t\t2 RAEES \n\n\t\t\tFARE IS RS.150");
		printf("\n\n\t\t\t3 BADRINATH KI DULHANIA \n\n\t\t\tFARE IS RS.150");
	}
	
	else 
 	{
 		printf("\n\n\t\tYOU HAVE ENTERED WRONG OPTION");
		exit(0);
	}		
}

void TICKETCAN()		//for cancellation of ticket
{
	int tno,no,aa,aaa;
	printf("\n\n\t\tENTER THE TICKET NO TO CANCEL= ");
	scanf("%d",&aa);
	printf("\n\n\t\tPLEASE ENTER AMOUNT YOU HAVE PAID FOR TICKET= ");
	scanf("%d",&aaa);
	printf("\n\n\t\tENTER THE NO OF TICKETS BOOKED BY YOU IN TICKET NO %d = ",aa);
	scanf("%d",&tno);
	
	if(aa==(aaa*1234*tno))
	{
		printf("\n\n\t\tYOUR TICKET HAS BEEN SUCCESFULLY CANCELLED...");
		printf("\n\n\t\tTHANKS FOR USING OUR SERVICE :) :) :)");
	}
	
	else
	puts("\n\n\t\tTICKET NO DID NOT MATCHED :( :( :(");
}

int main()
{
	char che;
	int ch;
	system("color b9"); 		
	printf("\n\t\t");	
	for(int i=0;i<60;i++)
	{
	
		printf("*");
	}
	printf("\n\n\n\t\t\tWELCOME TO ONLINE MOVIE TICKETING SYSTEM");
	printf("\n\n\n\t\t");
	for(int i=0;i<60;i++)
	{
	
		printf("*");
	}
	
	xyz:
	printf("\n\n\n\n\t\tChoose your option:-");
	printf("\n\n\t\t1)TICKET BOOKING");
	printf("\n\n\t\t2)TICKET CANCELLATION");
	printf("\n\n\t\t3)KNOW FARE ");
	printf("\n\n\t\t4)EXIT ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			{
				TICKETBUK();
			}
			break;
		case 2:
			{
				TICKETCAN();
			}
			break;
		case 3:
			{
				KNOWFARE();
			}
			break;
		case 4:
			exit(0);
		default:
			printf("\n\n\t\tYOU ENTERED WRONG OPTION");
			printf("\n\t\tPLEASE ENTER RIGHT CHOICE AGAIN");
			goto xyz;
	
	}
	printf("\n\n\n\t\tWANT TO DO MORE?(Y/N)");
	scanf(" %c",&che);
	if(che=='Y'||che=='y')
	{
	
	goto xyz;
	
	}
	else if(che=='N'||che=='n')
	{
	
	exit(0);
	}
	else
	{
	printf("\n\n\t\tWRONG INPUT");
	}
	

}

