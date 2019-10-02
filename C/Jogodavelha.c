#include <stdio.h>
#include <unistd.h> //FUNCAO SLEEP

int main()
{
	int i, j, l, c, cic, p, numjog, op, mod, cpujog;
	char tab[3][3];
	
	printf("    __                  _        _____     _ _       \n");
	printf(" __|  |___ ___ ___    _| |___   |  |  |___| | |_ ___ \n");
	printf("|  |  | . | . | . |  | . | .'|  |  |  | -_| |   | .'|\n");
	printf("|_____|___|_  |___|  |___|__,|   \\___/|___|_|_|_|__,|\n");
	printf("          |___|                                      \n");
	printf("\t\t\t\t\t\tV1.0\n");
	
	//LOOP PRINCIPAL
	do{
		printf("\nCOMO DESEJA JOGAR:\n1 - CONTRA OUTRO JOGADOR\n2 - CONTRA A CPU\n3 - SAIR\n");
		scanf("%d", &mod);
		
		switch(mod){
		
		//OPÇÃO 1 - HUMANO VS HUMANO
		case 1:
			cic = 0;
			p = 0;
			numjog = 0;
	
			printf("Jogador 1 -> X\nJogador 2 -> O");
			for(i=0; i<3; i++)
			{
				for(j=0; j<3; j++)
				{
					tab[i][j] ='-';
				}
			}
	
			for(i=0; i<3; i++)
			{
				printf("\n\n");
				for(j=0; j<3; j++)
				{
					printf("\t|%c|  ", tab[i][j]);
				}
			}
	
			//REPETIÇÃO DAS JOGADAS
			do
			{
				if(cic != 2)
				{
					p = 0;
					do{
					printf("\n\nVEZ DO JOGADOR 1!\n");
					printf("\nLinha:\n");
					scanf("%d", &l);
					printf("Coluna:\n");
					scanf("%d", &c);
			
					if((tab[l-1][c-1])==('-')){tab[l-1][c-1] = 'X';p = 1;numjog ++;}
					else {printf("\nAÍ NÃO CAMPEÃO...\n");p = 0;}
					}while(p == 0);
	
					for(i=0; i<3; i++)
					{
						printf("\n\n");
						for(j=0; j<3; j++)
						{
							printf("\t|%c|  ", tab[i][j]);
						}
					}
					//PRIMEIRO ANALISA SE JOGADOR 1 VENCEU, CASO POSITIVO, cic = 1
					//LINHAS:
					if((tab[0][0] == tab[0][1])&&(tab[0][0] == tab[0][2])&&tab[0][0] == 'X')cic = 1;
					if((tab[1][0] == tab[1][1])&&(tab[1][0] == tab[1][2])&&tab[1][0] == 'X')cic = 1;
					if((tab[2][0] == tab[2][1])&&(tab[2][0] == tab[2][2])&&tab[2][0] == 'X')cic = 1;
					//COLUNAS:
					if((tab[0][0] == tab[1][0])&&(tab[0][0] == tab[2][0])&&tab[0][0] == 'X')cic = 1;
					if((tab[0][1] == tab[2][1])&&(tab[0][1] == tab[1][1])&&tab[0][1] == 'X')cic = 1;
					if((tab[0][2] == tab[1][2])&&(tab[0][2] == tab[2][2])&&tab[0][2] == 'X')cic = 1;
					//DIAGONAIS:
					if((tab[0][0] == tab[1][1])&&(tab[0][0] == tab[2][2])&&tab[0][0] == 'X')cic = 1;
					if((tab[0][2] == tab[1][1])&&(tab[0][2] == tab[2][0])&&tab[0][2] == 'X')cic = 1;
				}
		
				if(cic != 1)
				{
					p = 0;
					do{
					printf("\n\nVEZ DO JOGADOR 2!\n");
					printf("\nLinha:\n");
					scanf("%d", &l);
					printf("Coluna:\n");
					scanf("%d", &c);
	
					if((tab[l-1][c-1])==('-')){tab[l-1][c-1] = 'O';p = 1;numjog ++;}
					else{printf("\nAÍ NÃO CAMPEÃO...\n");p = 0;}
					}while(p == 0);
	
					for(i=0; i<3; i++)
					{
						printf("\n\n");
						for(j=0; j<3; j++)
						{
							printf("\t|%c|  ", tab[i][j]);
						}
					}
					//A MESMA LOGICA PARA SABER SE JOGADOR 2 VENCEU, CASO POSITIVO, cic = 2
					//LINHAS:
					if((tab[0][0] == tab[0][1])&&(tab[0][0] == tab[0][2])&&tab[0][0] == 'O')cic = 2;
					if((tab[1][0] == tab[1][1])&&(tab[1][0] == tab[1][2])&&tab[1][0] == 'O')cic = 2;
					if((tab[2][0] == tab[2][1])&&(tab[2][0] == tab[2][2])&&tab[2][0] == 'O')cic = 2;
					//COLUNAS:
					if((tab[0][0] == tab[1][0])&&(tab[0][0] == tab[2][0])&&tab[0][0] == 'O')cic = 2;
					if((tab[0][1] == tab[2][1])&&(tab[0][1] == tab[1][1])&&tab[0][1] == 'O')cic = 2;
					if((tab[0][2] == tab[1][2])&&(tab[0][2] == tab[2][2])&&tab[0][2] == 'O')cic = 2;
					//DIAGONAIS:
					if((tab[0][0] == tab[1][1])&&(tab[0][0] == tab[2][2])&&tab[0][0] == 'O')cic = 2;
					if((tab[0][2] == tab[1][1])&&(tab[0][2] == tab[2][0])&&tab[0][2] == 'O')cic = 2;
				}
		
				//EMPATE ACONTECE QUANDO 8 ESPAÇOS FORAM OCUPADOS E NÃO HOUVE VENCEDOR, cic = 3
		
				if(numjog>=8)cic=3;

			}while(cic == 0);
		break;
		
		//OPÇÃO 2 - HUMANO VS CPU
		case 2:
			cic = 0;
			p = 0;
			numjog = 0;
			cpujog = 0;
	
			printf("Jogador 1 -> X\nCPU -> O");
			for(i=0; i<3; i++)
			{
				for(j=0; j<3; j++)
				{
					tab[i][j] ='-';
				}
			}
	
			for(i=0; i<3; i++)
			{
				printf("\n\n");
				for(j=0; j<3; j++)
				{
					printf("\t|%c|  ", tab[i][j]);
				}
			}
	
			//REPETIÇÃO DAS JOGADAS
			do
			{
				if(cic != 2)
				{
					p = 0;
					do{
					printf("\n\nVEZ DO JOGADOR 1!\n");
					printf("\nLinha:\n");
					scanf("%d", &l);
					printf("Coluna:\n");
					scanf("%d", &c);
			
					if((tab[l-1][c-1])==('-')){tab[l-1][c-1] = 'X';p = 1;numjog ++;}
					else {printf("\nAÍ NÃO CAMPEÃO...\n");p = 0;}
					}while(p == 0);
	
					for(i=0; i<3; i++)
					{
						printf("\n\n");
						for(j=0; j<3; j++)
						{
							printf("\t|%c|  ", tab[i][j]);
						}
					}
					//PRIMEIRO ANALISA SE JOGADOR 1 VENCEU, CASO POSITIVO, cic = 1
					//LINHAS:
					if((tab[0][0] == tab[0][1])&&(tab[0][0] == tab[0][2])&&tab[0][0] == 'X')cic = 1;
					if((tab[1][0] == tab[1][1])&&(tab[1][0] == tab[1][2])&&tab[1][0] == 'X')cic = 1;
					if((tab[2][0] == tab[2][1])&&(tab[2][0] == tab[2][2])&&tab[2][0] == 'X')cic = 1;
					//COLUNAS:
					if((tab[0][0] == tab[1][0])&&(tab[0][0] == tab[2][0])&&tab[0][0] == 'X')cic = 1;
					if((tab[0][1] == tab[2][1])&&(tab[0][1] == tab[1][1])&&tab[0][1] == 'X')cic = 1;
					if((tab[0][2] == tab[1][2])&&(tab[0][2] == tab[2][2])&&tab[0][2] == 'X')cic = 1;
					//DIAGONAIS:
					if((tab[0][0] == tab[1][1])&&(tab[0][0] == tab[2][2])&&tab[0][0] == 'X')cic = 1;
					if((tab[0][2] == tab[1][1])&&(tab[0][2] == tab[2][0])&&tab[0][2] == 'X')cic = 1;
				}
		
				if(cic != 1)
				{
					p = 0;
					do{
						printf("\n\nVEZ DA CPU!\n");
						sleep(1); 
						
						//LÕGICA DE JOGADAS ENTRA AQUI
						if(cpujog == 0)
						{
							if(tab[1][1] == 'X'){tab[2][2] = 'O';p = 1;}
							if(tab[0][0] == 'X'){tab[1][1] = 'O';p = 1;}
							if(tab[2][2] == 'X'){tab[1][1] = 'O';p = 1;}
							if(tab[2][0] == 'X'){tab[1][1] = 'O';p = 1;}
							if(tab[0][2] == 'X'){tab[1][1] = 'O';p = 1;}
							if(tab[0][1] == 'X'){tab[1][1] = 'O';p = 1;}
							if(tab[1][0] == 'X'){tab[1][1] = 'O';p = 1;}
							if(tab[2][1] == 'X'){tab[1][1] = 'O';p = 1;}
							if(tab[1][2] == 'X'){tab[1][1] = 'O';p = 1;}
						}
						if(cpujog == 1)
						{
							if(p == 0 && (tab[0][0] == 'X')&&(tab[0][2] == 'X')){tab[0][1] = 'O';p = 1;}
							if(p == 0 && (tab[0][0] == 'X')&&(tab[0][1] == 'X')){tab[0][2] = 'O';p = 1;}
							if(p == 0 && (tab[0][0] == 'X')&&(tab[1][0] == 'X')){tab[2][0] = 'O';p = 1;}
							if(p == 0 && (tab[0][0] == 'X')&&(tab[2][0] == 'X')){tab[1][0] = 'O';p = 1;}
							if(p == 0 && (tab[0][0] == 'X')&&(tab[2][1] == 'X')){tab[1][2] = 'O';p = 1;}
							if(p == 0 && (tab[0][0] == 'X')&&(tab[2][2] == 'X')){tab[0][1] = 'O';p = 1;}
							if(p == 0 && (tab[0][0] == 'X')&&(tab[1][2] == 'X')){tab[0][2] = 'O';p = 1;}
							if(p == 0 && (tab[1][1] == 'X')&&(tab[2][0] == 'X')){tab[0][2] = 'O';p = 1;}
							if(p == 0 && (tab[1][1] == 'X')&&(tab[1][0] == 'X')){tab[1][2] = 'O';p = 1;}
							if(p == 0 && (tab[1][1] == 'X')&&(tab[2][1] == 'X')){tab[0][1] = 'O';p = 1;}
							if(p == 0 && (tab[1][1] == 'X')&&(tab[0][0] == 'X')){tab[0][2] = 'O';p = 1;}
							if(p == 0 && (tab[1][1] == 'X')&&(tab[0][1] == 'X')){tab[2][1] = 'O';p = 1;}
							if(p == 0 && (tab[1][1] == 'X')&&(tab[1][2] == 'X')){tab[1][0] = 'O';p = 1;}
							if(p == 0 && (tab[1][1] == 'X')&&(tab[0][2] == 'X')){tab[2][0] = 'O';p = 1;}
							if(p == 0 && (tab[2][2] == 'X')&&(tab[2][0] == 'X')){tab[2][1] = 'O';p = 1;}
							if(p == 0 && (tab[2][2] == 'X')&&(tab[1][0] == 'X')){tab[2][0] = 'O';p = 1;}
							if(p == 0 && (tab[2][2] == 'X')&&(tab[2][1] == 'X')){tab[2][0] = 'O';p = 1;}
							if(p == 0 && (tab[2][2] == 'X')&&(tab[0][1] == 'X')){tab[0][2] = 'O';p = 1;}
							if(p == 0 && (tab[2][2] == 'X')&&(tab[1][2] == 'X')){tab[0][2] = 'O';p = 1;}
							if(p == 0 && (tab[2][2] == 'X')&&(tab[0][2] == 'X')){tab[1][2] = 'O';p = 1;}
							if(p == 0 && (tab[2][0] == 'X')&&(tab[2][2] == 'X')){tab[2][1] = 'O';p = 1;}
							if(p == 0 && (tab[2][0] == 'X')&&(tab[1][0] == 'X')){tab[0][0] = 'O';p = 1;}
							if(p == 0 && (tab[2][0] == 'X')&&(tab[2][1] == 'X')){tab[2][2] = 'O';p = 1;}
							if(p == 0 && (tab[2][0] == 'X')&&(tab[0][1] == 'X')){tab[0][0] = 'O';p = 1;}
							if(p == 0 && (tab[2][0] == 'X')&&(tab[1][2] == 'X')){tab[2][2] = 'O';p = 1;}
							if(p == 0 && (tab[2][0] == 'X')&&(tab[0][2] == 'X')){tab[1][0] = 'O';p = 1;}
							if(p == 0 && (tab[0][2] == 'X')&&(tab[2][0] == 'X')){tab[1][2] = 'O';p = 1;}
							if(p == 0 && (tab[0][2] == 'X')&&(tab[1][0] == 'X')){tab[0][0] = 'O';p = 1;}
							if(p == 0 && (tab[0][2] == 'X')&&(tab[2][1] == 'X')){tab[2][2] = 'O';p = 1;}
							if(p == 0 && (tab[0][2] == 'X')&&(tab[0][1] == 'X')){tab[0][0] = 'O';p = 1;}
							if(p == 0 && (tab[0][2] == 'X')&&(tab[1][2] == 'X')){tab[2][2] = 'O';p = 1;}
							if(p == 0 && (tab[0][2] == 'X')&&(tab[2][2] == 'X')){tab[1][2] = 'O';p = 1;}	
							if(p == 0 && (tab[0][1] == 'X')&&(tab[1][0] == 'X')){tab[0][0] = 'O';p = 1;}
							if(p == 0 && (tab[0][1] == 'X')&&(tab[2][1] == 'X')){tab[1][0] = 'O';p = 1;}
							if(p == 0 && (tab[0][1] == 'X')&&(tab[1][2] == 'X')){tab[0][2] = 'O';p = 1;}
							if(p == 0 && (tab[1][0] == 'X')&&(tab[2][1] == 'X')){tab[2][0] = 'O';p = 1;}
							if(p == 0 && (tab[1][0] == 'X')&&(tab[1][2] == 'X')){tab[2][0] = 'O';p = 1;}
							if(p == 0 && (tab[2][1] == 'X')&&(tab[1][2] == 'X')){tab[1][0] = 'O';p = 1;}
							
						}
						if(cpujog == 2)
						{
							//diag
							if(p == 0 && (tab[0][0] == 'O')&&(tab[1][1] == 'O')){tab[2][2] = 'O';p = 1;}
							if(p == 0 && (tab[0][2] == 'O')&&(tab[1][1] == 'O')){tab[2][0] = 'O';p = 1;}
							if(p == 0 && (tab[2][2] == 'O')&&(tab[1][1] == 'O')){tab[0][0] = 'O';p = 1;}
							if(p == 0 && (tab[2][0] == 'O')&&(tab[1][1] == 'O')){tab[0][2] = 'O';p = 1;}
							//col
							if(p == 0 && (tab[0][0] == 'O')&&(tab[1][0] == 'O') && tab[2][0] == '-'){tab[2][0] = 'O';p = 1;}
						}
						if(cpujog == 4)
						{
						}
						if(cpujog == 5)
						{
						}
						if(cpujog == 6)
						{
						}
						if(cpujog == 7)
						{
						}	
						cpujog ++;
					}while(p == 0);
	
					for(i=0; i<3; i++)
					{
						printf("\n\n");
						for(j=0; j<3; j++)
						{
							printf("\t|%c|  ", tab[i][j]);
						}
					}
					//A MESMA LOGICA PARA SABER SE JOGADOR 2 VENCEU, CASO POSITIVO, cic = 2
					//LINHAS:
					if((tab[0][0] == tab[0][1])&&(tab[0][0] == tab[0][2])&&tab[0][0] == 'O')cic = 2;
					if((tab[1][0] == tab[1][1])&&(tab[1][0] == tab[1][2])&&tab[1][0] == 'O')cic = 2;
					if((tab[2][0] == tab[2][1])&&(tab[2][0] == tab[2][2])&&tab[2][0] == 'O')cic = 2;
					//COLUNAS:
					if((tab[0][0] == tab[1][0])&&(tab[0][0] == tab[2][0])&&tab[0][0] == 'O')cic = 2;
					if((tab[0][1] == tab[2][1])&&(tab[0][1] == tab[1][1])&&tab[0][1] == 'O')cic = 2;
					if((tab[0][2] == tab[1][2])&&(tab[0][2] == tab[2][2])&&tab[0][2] == 'O')cic = 2;
					//DIAGONAIS:
					if((tab[0][0] == tab[1][1])&&(tab[0][0] == tab[2][2])&&tab[0][0] == 'O')cic = 2;
					if((tab[0][2] == tab[1][1])&&(tab[0][2] == tab[2][0])&&tab[0][2] == 'O')cic = 2;
				}
		
				//EMPATE ACONTECE QUANDO 8 ESPAÇOS FORAM OCUPADOS E NÃO HOUVE VENCEDOR, cic = 3
		
				if(numjog>=8)cic=3;

			}while(cic == 0);
		break;
		
		//OPÇÃO 3 - SAIR DO JOGO
		case 3:
			op = 0;
		break;
		default:
			printf("\nESCOLHA INVÁLIDA\n");
		break;
		}
	
	if(cic == 1)printf("\n\n\n\tPARABÉNS JOGADOR 1, VOCÊ VENCEU!\n");
	if(cic == 2 && mod == 1)printf("\n\n\n\tPARABÉNS JOGADOR 2, VOCÊ VENCEU!\n");
	if(cic == 2 && mod == 2)printf("\n\n\n\tEU VENCI!\n");
	if(cic == 3)printf("\n\n\n\tEMPATOU!\n");
	
	if(mod != 3)printf("\nJOGAR NOVAMENTE?\n1 - SIM\n2 - NÃO\n");
	if(mod != 3)scanf("%d", &op);
	}while(op==1);
	
return 0;
	
}
