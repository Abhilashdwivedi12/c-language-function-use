#include<stdio.h>
#include<conio.h>

int main()
{
	printf("\t\t\t\t\t Welcome in my game world\n");
	printf("\t\t\t\t\t TIC TAC GAME\n\n\n");


	printf("\n");
	
	char index[]={'1','2','3','4','5','6','7','8','9'};
	int m;
//	char X;
	
	printf("\t   \t |\t   \t |\t   \t \n");
	printf("\t %c \t |\t %c \t |\t %c \t \n",index[0],index[1],index[2]);
	printf("\t   \t |\t   \t |\t   \t \n");
	printf("_____________________________________________________\n");
	printf("\t   \t |\t   \t |\t   \t \n");
	printf("\t %c \t |\t %c \t |\t %c \t \n",index[3],index[4],index[5]);
	printf("\t   \t |\t   \t |\t   \t \n");
	printf("_____________________________________________________\n");
	printf("\t   \t |\t   \t |\t   \t \n");
	printf("\t %c \t |\t %c \t |\t %c \t \n",index[6],index[7],index[8]);
	printf("\t   \t |\t   \t |\t   \t \n");
	
	printf("mark your move ");
	scanf("%d",&m);
	index[m-1]='X';
	
	printf("\t   \t |\t   \t |\t   \t \n");
	printf("\t %c \t |\t %c \t |\t %c \t \n",index[0],index[1],index[2]);
	printf("\t   \t |\t   \t |\t   \t \n");
	printf("_____________________________________________________\n");
	printf("\t   \t |\t   \t |\t   \t \n");
	printf("\t %c \t |\t %c \t |\t %c \t \n",index[3],index[4],index[5]);
	printf("\t   \t |\t   \t |\t   \t \n");
	printf("_____________________________________________________\n");
	printf("\t   \t |\t   \t |\t   \t \n");
	printf("\t %c \t |\t %c \t |\t %c \t \n",index[6],index[7],index[8]);
	printf("\t   \t |\t   \t |\t   \t \n");
}
