/*****************************************************************************************************************************************************************************************************************************
 * Este programa foi desenvolvido em C, e tem como objetivo distribuir usuários em servidores, que são criados a medida que novos usuários se conectam. A distribuição destes usuários em respectivos servidores, é feita
 * obedecendo certos parâmetros, como o número máximo de usuários por servidor (variável "umax"). A medida que um usuário se conecta, este fica conectado até o final da tarefa, que tem a duração representada pela variável
 * "ttask", em ticks. O programa está incompleto, sendo necessários alguns ajustes na separação de usuários e na formatação do arquivo "output.txt", bem como o cálculo do valor gasto por servidor no final. Os parâmetros 
 * de balanceamento, bem como o número de usuários que se conectam a cada tick, deve ser escrito no arquivo "input.txt". 
 * 
 * 2019 João Carlos Miquilini Cordibello Marques
 * ***************************************************************************************************************************************************************************************************************************
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Função principal main.
int main()
{
    int ttask, umax, tick, usrNew, usrQtd, srvQtd, usr[10];
    bool user = true;
    
    //inicializar o vetor de usuários
    for(int i = 0; i < 10; i++)
    {
        usr[i] = 0;
    }
    
    FILE *input;
   					if ((input=fopen("input.txt","r"))==NULL)
   					{
       						printf("Erro! Arquivo input não existente");
       						exit(1);         //Sai se o arquivo "input.txt" não existir.
   					}
   					
   					fscanf(input,"%d\n",&ttask);//Lê a primeira linha do arquivo de input, e grava o valor na variável ttask.
                    fscanf(input,"%d\n",&umax); //Lê a segunda linha do arquivo de input e grava o valor na variável umax.
                    fscanf(input,"%d\n",&usrNew); //Lê a terceira linha do arquivo de input e grava o valor na variável usrNew.
                    
                    usrQtd = usrNew;
                    
   					printf("Valor de ttask:\n%d\n",ttask);
                    printf("Valor de umax:\n%d\n",umax);
                    
                    FILE *output;
   					output=fopen("output.txt","w"); //Cria o arquivo "output.txt".
   					
                    //Loop principal da criação do arquivo output
   					for(tick = 1;( usrNew > 0 || user == 1); tick++)
                    {
                        //Este pequeno laço "for" preenche cada posição do vetor "usr" com os valores do "tick" atual, para que seja possível, mais tarde, desconectar o usuário após "ttask".
                        for(int i = usrNew; i > 0; i--)
                        {
                            if(usr[i-1] == 0)
                            {
                                usr[i-1] = tick + ttask;
                            }
                        }
                        
                        //Teste para saber se a tarefa já foi competada. Se sim, desconecta usuário (zera posição do vetor).
                        for(int i = 1; i <= 10; i++)
                        {
                            if(usr[i-1] == (tick - 1))
                            {
                                usr[i-1] = 0;
                            }
                        }
                        
                        //Define o número de servidores necessários para a quantidade de usuários conectados.
                        srvQtd = (usrQtd / umax);
                        if ((usrNew%umax) != 0) srvQtd ++;
                        
                        //Escreve a linha do arquivo output, com a quantidade de usuários em seus respectivos servidores.
                        for(int c = 0; srvQtd > c; c++)
                        {
                            fprintf(output, "%d,", usrNew);
                        }
                        fprintf(output,"\n");
                        
                        //Lê a proxima linha do arquivo de input e grava o valor na variável usrNew.
                        fscanf(input,"%d\n",&usrNew);
                        
                        //Monitoramento de variáveis para controle.
                        printf("Valor de tick: %d\n",tick);
                        printf("Quantidade de srvs: %d\n",srvQtd);
                        printf("Quantidade de usrs: %d\n",usrQtd);
                        printf("Valor do vetor: %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n\n",usr[0], usr[1], usr[2], usr[3], usr[4], usr[5], usr[6], usr[7], usr[8], usr[9]);
                        
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
                                i == 11;
                            }
                        }
                        
                    }
                
   					fclose(output);
                    fclose(input);
}

