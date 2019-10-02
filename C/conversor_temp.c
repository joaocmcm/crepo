#include <stdio.h>

float converte(float t, char c)
{
	float temp;
	
	if(c == 'c'||c == 'C')	temp = ((9 * t) + 160)/5;
	
		else temp = ((5 * t) - 160)/9;
	
	return temp;
}

int main()
{
	char c;
	float t;
	
	printf("\nDigite o valor da temperatura:\n");
	scanf("%f", &t);
	
	printf("\nDigite a unidade da temperatura:\n");
	__fpurge(stdin);				//Antes de chamar qualquer leitura de caracter, utilizar o purge!!!
	scanf("%c", &c);				
	
	if(c == 'F'||c == 'f') printf("\n'%0.2fF°' equivale a '%0.2fC°'\n", t, converte(t, c)); //Chamando funções no 'printf'
	
		else printf("\n'%0.2fC°' equivale a '%0.2fF°'\n", t, converte(t, c));
	
	
return 0;
}
