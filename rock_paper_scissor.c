#include<stdio.h>
#include<stdlib.h>
int main()
{
	int rock=1;
	int paper=2;
	int scissor=3;
	int i,trials,cscore,pscore;
	printf("Enter How many trials needed\n");
	scanf("%d",&trials);
	for(i=0;i<trials;i++)
	{	printf("1)ROCK\n");
	printf("2)PAPER\n");
	printf("3)SCISSOR\n");
		printf("Enter your choice\n");
		int choice;
		scanf("%d",&choice);
		int computer=rand()%3+1;
		if(choice==1)
		{
			if(computer==1)
			{
				printf("Draw\n");
			}
			if(computer==2)
			{
				printf("Computer Wins\n");
				cscore=cscore+1;
			}
			if(computer==3)
			{
				printf("Player Wins\n");
				pscore=pscore+1;
			}
			
		}
		else if(choice==2)
		{
			if(computer==1)
			{
				printf("Computer Wins\n");
				cscore=cscore+1;
			}
			if(computer==2)
			{
				printf("Draw\n");
			}
			if(computer==3)
			{
				printf("Player Wins\n");
				pscore=pscore+1;
			}	
		}
		else if(choice==3)
		{
			if(computer==1)
			{printf("Player Wins\n");
				pscore=pscore+1;
				
			}
			if(computer==3)
			{
				printf("Draw");
			}
			if(computer==2)
			{
				printf("Computer Wins\n");
				cscore=cscore+1;
			}	
		}
		else
		{
			printf("Wrong Answer\n");
		}	
	}
	printf("Congrats\n");
	if(pscore>cscore)
	{
		printf("Player wins");
	}
	else if(pscore==cscore)
	{
		printf("Draw\n");
	}
	else
	{
		printf("Computer wins\n");
	}
	
}
