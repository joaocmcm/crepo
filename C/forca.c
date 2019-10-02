#include <stdio.h>
#include <string.h>

int main()
{
	char palavra[25], lacuna[25], letra[25], erros[25], tam;
	int vida, i, i2, retorna, pontos, op, mod, p;
	
	printf("    __                  _        _____                 \n");
	printf(" __|  |___ ___ ___    _| |___   |   __|___ ___ ___ ___ \n");
	printf("|  |  | . | . | . |  | . | .'|  |   __| . |  _|  _| .'|\n");
	printf("|_____|___|_  |___|  |___|__,|  |__|  |___|_| |___|__,|\n");
	printf("          |___|                                        \n");
	printf("\t\t\t\t\t\tV1.0\n");
	
	op = 1;
	
	do{
		printf("\nCOMO DESEJA JOGAR:\n1 - CONTRA OUTRO JOGADOR\n2 - PALAVRA ALEATÓRIA\n3 - SAIR\n");
		scanf("%d", &mod);
		
		switch(mod)
		{
			//HUMANO VS HUMANO - UM JOGADOR DIGITA UMA PALAVRA E O OUTRO TEM QUE ADVINHAR A PALAVRA DIGITADA
			case 1:
				vida = 6; //Número de vezes que o jogador pode errar o palpite
				pontos = 0;
				i2 = 0;
				p = 0;
				
				for(i = 0; i < 25; i++) //Este loop limpa o vetor 'palavra' para que não seja mostrado "lixo" na tela
				{
					lacuna[i] = 0;
					erros[i] = 0;
				
				}
			
				printf("Digite uma palavra:\n");
				__fpurge(stdin);
				gets(palavra);
				
				//LIMPA A TELA PARA QUE O JOGADOR 2 NAO VEJA A PALAVRA DIGITADA
				system("clear");
				
				//Loop que preenche o vetor 'lacuna' com traços na quantidade de letras da palavra digitada
				for(i = 0; i < strlen(palavra); i++)
				{
					lacuna[i] = '_';
					tam = strlen(palavra);
				
				}
				//LOOP DO JOGO	
					while(vida > 0)
					{
						retorna = 0;
						system("clear");
						//DESENHA O BONEQUINHO NA FORCA E A PALAVRA DIGITADA EM BAIXO
						//CADA LINHA DESENHA O BONECO INTEIRO DE NOVO, ADICIONANDO AS PARTES
						printf(" +-------+\n");
						printf(" |       |\n");
						if(vida==5)printf(" |       0\n");//cabeça
						if(vida==4)printf(" |       0\n |      /\n");//braço esquerdo
						if(vida==3)printf(" |       0\n |      /|\n");//peito
						if(vida==2)printf(" |       0\n |      /|\\\n");//braço direito
						if(vida==1)printf(" |       0\n |      /|\\\n |      /\n");//perna esquerda
						if(vida==0)printf(" |       0\n |      /|\\\n |      / \\\n");//perna direita
						printf(" |        \n");
						printf(" |        \n");
						printf(" |        \n");
						if(vida>5)printf(" |        \n");
						if(vida>4)printf(" |        \n");
						if(vida>1)printf(" |        \n");
						printf("=+=     ");
						printf("%s\n", lacuna);
						printf("Erros:'%s'\n", erros);
						
						printf("Digite uma letra:\n");
						__fpurge(stdin);
						gets(letra);
						erros[p] = letra[p];
						p++;
					
					
						for(i = 0; i < strlen(palavra); i++)
						{
							if(letra[0] == palavra[i])
							{
								lacuna[i] = palavra[i];
								retorna ++;
								pontos ++;
							}
						}
						
						if(retorna == 0)
						{
							vida --;
							if(vida == 0)
							{
							//AQUI É O QUE ACONTECE QUANDO SE ESGOTAM AS CHANCES DE ACERTAR DO JOGADOR
								printf(" +-------+\n");
								printf(" |       |\n");
								printf(" |       0\n |      /|\\\n |      / \\\n");
								printf(" |        \n");
								printf(" |        \n");
								printf(" |        \n");
								printf("=+=     ");
								printf("%s\n", lacuna);
								printf("\nVocê perdeu! a palava certa era:'%s'\n", palavra);
								break;
							}
							else
							{
								printf("Você errou uma letra, resta(m) apenas %d chance(s)\n", vida);
								erros[i2] = letra[0];
								i2++;
							}
						}
						else
						{
							if(pontos == tam)
							{
								printf("\nParabéns, você acertou a palavra!\n");
								printf("'%s'\n", palavra);
								break;
							}
							else
							{
								printf("\nVocê acertou uma letra\n");	
							}
						}
					
				}
				
				
			break;
			
			//PALAVRA ALEATÓRIA - O PROGRAMA SORTEIA UMA PALAVRA QUALQUER E O JOGADOR TEM QUE ADVINHAR A PALAVRA SORTEADA
			case 2:
				vida = 6; //Número de vezes que o jogador pode errar o palpite
				pontos = 0;
				i2 = 0;
				
				for(i = 0; i < 25; i++) //Este loop limpa o vetor 'palavra' para que não seja mostrado "lixo" na tela
				{
					lacuna[i] = 0;
				
				}
			
				FILE *fptr;
   					if ((fptr=fopen("wordlist.txt","r"))==NULL)
   					{
       						printf("Error! opening file");
       						exit(1);         //Sai se o wordlist não existir
   					}
   					
   					fscanf(fptr,"%[^\n]",palavra);
   					printf("Data from file:\n%s",palavra);
   					fclose(fptr);
				
				//Loop que preenche o vetor 'lacuna' com traços na quantidade de letras da palavra digitada
				for(i = 0; i < strlen(palavra); i++)
				{
					lacuna[i] = '_';
					tam = strlen(palavra);
				
				}
				//LOOP DO JOGO	
					while(vida > 0)
					{
						retorna = 0;
						system("clear");
						//DESENHA O BONEQUINHO NA FORCA E A PALAVRA DIGITADA EM BAIXO
						//CADA LINHA DESENHA O BONECO INTEIRO DE NOVO, ADICIONANDO AS PARTES
						printf(" +-------+\n");
						printf(" |       |\n");
						if(vida==5)printf(" |       0\n");//cabeça
						if(vida==4)printf(" |       0\n |      /\n");//braço esquerdo
						if(vida==3)printf(" |       0\n |      /|\n");//peito
						if(vida==2)printf(" |       0\n |      /|\\\n");//braço direito
						if(vida==1)printf(" |       0\n |      /|\\\n |      /\n");//perna esquerda
						if(vida==0)printf(" |       0\n |      /|\\\n |      / \\\n");//perna direita
						printf(" |        \n");
						printf(" |        \n");
						printf(" |        \n");
						if(vida>5)printf(" |        \n");
						if(vida>4)printf(" |        \n");
						if(vida>1)printf(" |        \n");
						printf("=+=     ");
						printf("%s\n", lacuna);
						
						printf("Digite uma letra:\n");
						__fpurge(stdin);
						gets(letra);
						//printf("\nLetras digitadas %s\n", erros);
					
					
						for(i = 0; i < strlen(palavra); i++)
						{
							if(letra[0] == palavra[i])
							{
								lacuna[i] = palavra[i];
								retorna ++;
								pontos ++;
							}
						}
						
						if(retorna == 0)
						{
							vida --;
							if(vida == 0)
							{
							//AQUI É O QUE ACONTECE QUANDO SE ESGOTAM AS CHANCES DE ACERTAR DO JOGADOR
								printf(" +-------+\n");
								printf(" |       |\n");
								printf(" |       0\n |      /|\\\n |      / \\\n");
								printf(" |        \n");
								printf(" |        \n");
								printf(" |        \n");
								printf("=+=     ");
								printf("%s\n", lacuna);
								printf("\nVocê perdeu! a palava certa era:'%s'\n", palavra);
								break;
							}
							else
							{
								printf("Você errou uma letra, resta(m) apenas %d chance(s)\n", vida);
								erros[i2] = letra[0];
								i2++;
							}
						}
						else
						{
							if(pontos == tam)
							{
								printf("\nParabéns, você acertou a palavra!\n");
								printf("'%s'\n", palavra);
								break;
							}
							else
							{
								printf("\nVocê acertou uma letra\n");	
							}
						}
					
				}
			break;
			//OPÇÃO SAIR - SAI DO LOOP WHILE PRINCIPAL
			case 3:
				op = 0;
			break;
			
			default:
			printf("\nESCOLHA INVÁLIDA\n");
			break;
		}
	}while(op == 1);
	
return 0;	
}
