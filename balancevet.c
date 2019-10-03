/*****************************************************************************************************************************************************************************************************************************
 * Este programa foi desenvolvido em C, e tem como objetivo distribuir usuários em servidores, que são criados a medida que novos usuários se conectam. A distribuição destes usuários em respectivos servidores, é feita
 * obedecendo certos parâmetros, como o número máximo de usuários por servidor (variável "umax"). A medida que um usuário se conecta, este fica conectado até o final da tarefa, que tem a duração representada pela variável
 * "ttask", em ticks. O programa está incompleto, sendo necessários alguns ajustes na formatação do arquivo "output.txt", bem como o cálculo do valor gasto por servidor no final. Os parâmetros 
 * de balanceamento, bem como o número de usuários que se conectam a cada tick, deve ser escrito no arquivo "input.txt". 
 * 
 * 2019 João Carlos Miquilini Cordibello Marques
 * ***************************************************************************************************************************************************************************************************************************
*/

//TODO: ->Ajustar o cálculo do custo total das VM's.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Função recebe um vetor e organiza em ordem crescente. É possível usar o qsort ou bubble sort, optei por fazer assim com a intenção de esmiuçar, por questões de didática.
void ordena(int *vet)
{
    int i, j, aux;
    for(int i = 0; i < 10; i++)
    {
        for(int j = i+1; j < 10; j++)
        {
            if(vet[i] > vet[j])
            {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
}


int main()
{
    //Declaração de variáveis.
    int tick, ttask, umax, usrNew, usrQtd, srvQtd, usr[10], temp;
    float custo;
    bool user = true;
    
    //inicializa o vetor de usuários.
    for(int i = 0; i < 10; i++)
    {
        usr[i] = 0;
    }
    
    //Acessa o arquivo "input.txt" para a leitura dos dados de entrada.
    FILE *input;
   					if ((input=fopen("input.txt","r"))==NULL)
   					{
       						printf("Erro! Arquivo input não existente");
       						exit(1);         //Sai se o arquivo "input.txt" não existir.
   					}
   					
   					//Lê os parâmetros "ttask" e "umax" do arquivo input
   					fscanf(input,"%d\n",&ttask);
                    fscanf(input,"%d\n",&umax);
                    fscanf(input,"%d\n",&usrNew);
                    
                    usrQtd = usrNew;
                    
                    //Cria o arquivo "output.txt".
                    FILE *output;
   					output=fopen("output.txt","w");
   					
   					for(tick = 1;( usrNew > 0 || user == 1); tick++)
                    {
                        //Este pequeno laço "for" preenche cada posição do vetor "usr" com os valores do "tick" atual, para que seja possível, mais tarde, desconectar o usuário após "ttask".
                        for(int c = 0; c < 10; c++)
                        {
                            if(usr[c] == 0 && c < usrNew)
                            {
                                usr[c] = tick + ttask;
                            }
                        }
                        
                        ordena(usr);
                        
                        //Teste para saber se a tarefa já foi competada. Se sim, desconecta usuário (zera posição do vetor).
                        for(int i = 1; i <= 10; i++)
                        {
                            if(usr[i-1] == (tick))
                            {
                                usr[i-1] = 0;
                            }
                        }
                        
                        usrQtd = 0;
                        
                        //Percorre o vetor de usuários e verifica se ainda há algum usuário conectado. Caso negativo, sinaliza através da variável booleana "user". TRUE = Há conexão, FALSE = Sem usuários. Também faz a contagem de usuários conectados no "tick" atual.
                        for(int i = 1; i <= 10; i++)
                        {
                            user = false;
                            
                            if(usr[i-1] != 0)
                            {
                                usrQtd ++;
                            }
                            if(i == 10 && usrQtd != 0)
                            {
                                user = true;
                                break;
                            }
                        }
                        
                        //Atualiza a quantidade de VM's, se baseando na quantidade de usuários conectados e na variável "umax".
                        srvQtd = (usrQtd / umax);
                        if ((usrQtd%umax) != 0)
                        {
                            custo = custo + (float)ttask;
                            srvQtd ++;
                        }
                        
                        //Escreve a linha do arquivo output, com a quantidade de usuários em seus respectivos servidores.
                        for(int i = 0; srvQtd > i; i++)
                        {
                            if(((usrQtd / srvQtd) == 0) && ((usrQtd % srvQtd) != 0))
                            {
                                fprintf(output, "%d,", (usrQtd % srvQtd));
                            }
                            else
                            {
                                if(i == (srvQtd - 1))
                                {
                                    fprintf(output, "%d", (usrQtd / srvQtd));
                                }
                                else
                                {
                                    if((usrQtd / srvQtd) != 0)
                                    {
                                        if((usrQtd % srvQtd) == 0)
                                        {
                                            fprintf(output, "%d,", (usrQtd / srvQtd));
                                        }
                                        else
                                        {
                                            fprintf(output, "%d,", (usrQtd % srvQtd));
                                        }
                                    }
                                    else
                                    {
                                        fprintf(output, "%d,", (usrQtd % srvQtd));
                                    }
                                }
                            }
                        }
                        fprintf(output,"\n");
                        
                        /*"Descomentar" para monitorar os valores das variáveis no terminal.
                        printf("Valor de tick: %d\n",tick);
                        printf("Novos usuários neste tick: %d\n",usrNew);
                        printf("Quantidade de srvs: %d\n",srvQtd);
                        printf("Quantidade de usrs: %d\n",usrQtd);
                        printf("Valor do vetor: %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n\n",usr[0], usr[1], usr[2], usr[3], usr[4], usr[5], usr[6], usr[7], usr[8], usr[9]);*/
                        
                        //Lê a proxima linha do arquivo de input e grava o valor na variável usrNew.
                        fscanf(input,"%d\n",&usrNew);
                        
                    }
                    
                    fprintf(output, "0\n");
                    fprintf(output, "R$:%.2f\n", custo);
                    
   					fclose(output);
                    fclose(input);
                    
    return 0;
}

