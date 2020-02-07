#include<stdio.h>
int main()
{
	int a[3][3]={0},b[9]={0},c=0;
	int i,j,n,k,d,e,y,m;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	for(k=1;k<=9;k++)
	{
		if(c!=1)
	{
		if(k%2!=0)
		{
	y:	printf("Player1:\n");
		printf("Where you need to fix \n");
		scanf("%d",&n);
		
		d=n-3;
		e=n-6;
		if(b[n]==0)
		{
			b[n]=1;
		if(n>3||n<=6)
		{
			a[1][d]=1;
		}
		else if(n>=7||n<=9)
		{
			a[2][e]=1;
		}
		else if(n<3)
		{
			a[0][n]=1;
		}
		for(i=0;i<3;i++)
		{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
		}
		}
		else 
		{
			printf("Already filled\nreenter new value");
			goto y;
		}
		
		}
	else 
	{  
		m:	printf("Player2:\n");
		printf("Where you need to fix \n");
		scanf("%d",&n);
		d=n-3;
		e=n-6;
		if(b[n]==0)
	{	b[n]=1;
		if(n>3||n<=6)
		{
			a[1][d]=2;
		}
			else if(n>=7||n<=9)
			{
				a[2][e]=2;
			}
				else  if(n<3)
				{
					a[0][n]=2;
				}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d\t",a[i][j]);
			}
				printf("\n");
		}
	}
	else 
		{
			printf("Already filled\nreenter new value");
			goto m;
		}
	}
	
		if(a[0][0]==1&&a[1][1]==1&&a[2][2]==1||a[0][2]==1&&a[1][1]==1&&a[2][0]==1||a[0][0]==1&&a[1][0]==1&&a[2][0]==1||a[0][1]==1&&a[1][1]==1&&a[2][1]==1||a[1][2]==1&&a[0][2]==1&&a[2][2]==1||a[0][1]==1&&a[0][0]==1&&a[0][2]==1||a[1][1]==1&&a[1][0]==1&&a[1][2]==1||a[2][0]==1&&a[2][1]==1&&a[2][2]==1)
		{
			printf("A wins\n");
			printf("Congrats A\n");
			c=1;
		}
		else if(a[0][0]==2&&a[1][1]==2&&a[2][2]==2||a[0][2]==2&&a[1][1]==2&&a[2][0]==2||a[0][0]==2&&a[1][0]==2&&a[2][0]==2||a[0][1]==2&&a[1][1]==2&&a[2][1]==2||a[1][2]==2&&a[0][2]==2&&a[2][2]==2||a[0][1]==2&&a[0][0]==2&&a[0][2]==2||a[1][1]==2&&a[1][0]==2&&a[1][2]==2||a[2][0]==2&&a[2][1]==2&&a[2][2]==2){
			printf("B wins\n");
			printf("Congrats B\n");
			c=1;
		}
	}
	}	
}
	