#include <stdio.h>
#include <stdlib.h>

int MapaConecta(int n, int map[][5]);
void welcome();
int PrintMap(int n, int map[][5]);
int Pick1(int n, int map[][5]);

int main()
{
	int map[5][5];
	int turno1;
	MapaConecta(5,map);
	while (map[1][1]==0)
	{
		Pick1(5, map);
	}
	return 0;
}
void welcome()
{
	char option;
	printf("Welcome to Conecta4 GUPYS!!!! Make sure you have someone to play with otherwise split your brain in two xD\n Select an opction\na)instructions\n\nb)skip\n\n\n");
	scanf("%c", &option);
	if(option=='a')
	{
		printf("The turns will be distributed in 1 and 1, first the player one, then the player 2\nThe player 1 will be appered as '1' in the board and the player 2 as '2'\nThe player that conects 4 first will win, and the other one can eat fuits and vegetables\n\n\n");
		system("pause");  
	}
	else if(option=='b')
	{
			system("pause");
			printf("\n\n\n");
	}
		else
	{
		printf("Input a valid char\n");
		welcome();	
	}
}

int MapaConecta(int n, int map[][5])
{
	for (int i=0;i<6;i++)
	{
		for (int j=0;j<5;j++)
		{
			if (i==0)
			{
				map[i][j]=97+j;
			}
			else
			{
				map[i][j]=0;
			}
		}
	}
	PrintMap(5,map);
}
int PrintMap(int n, int map[][5])
{
	for (int i=0;i<6;i++)
	{
		for (int j=0;j<5;j++)
		{
			if (i==0)
			{
				printf(" |%c ",map[i][j]);
			}
			else
			{
				printf(" |%d ",map[i][j]);
			}
		}
		printf("|\n");
	}
	return 0;
}

int Pick1(int n, int map[][5])
{
	int choose=1;
	static int a=5,b=5,c=5,d=5,e=5;
	printf("\nPlayer 1 is your turn to pick a wher do you want your tunrn in:\n(1)a\n(2)b\n(3)c\n(4)d\n(5)e\n\n");
	scanf("%d",&choose);
	choose-=1;
	switch (choose)
	{
		case 0:
			map[a][choose]=1;
			a-=1;
			break;
		case 1:
			map[b][choose]=1;
			b-=1;
			break;
		case 2:
			map[c][choose]=1;
			c-=1;
			break;
		case 3:
			map[d][choose]=1;
			d-=1;
			break;
		case 4:
			map[e][choose]=1;
			e-=1;
			break;
	}
	PrintMap(5,map);
	//	-----------------------------------------------------------------------------------------------------------
	printf("\nPlayer 2 is your turn to pick a wher do you want your tunrn in:\n(1)a\n(2)b\n(3)c\n(4)d\n(5)e\n\n");
	scanf("%d",&choose);
	choose-=1;
	switch (choose)
	{
		case 0:
			map[a][choose]=2;
			a-=1;
			break;
		case 1:
			map[b][choose]=2;
			b-=1;
			break;
		case 2:
			map[c][choose]=2;
			c-=1;
			break;
		case 3:
			map[d][choose]=2;
			d-=1;
			break;
		case 4:
			map[e][choose]=2;
			e-=1;
			break;
	}
	PrintMap(5,map);
}



