#include <stdio.h>

//#define TAM 12 -> Isso é um comando para o compilador substituir "TAM" ao longo
//do programa para "12". Útil para valores que se repetem e possam ser alterados
//no futuro.

int main()
{
	int i;
	float sal[12];
	
	for(i=0; i<12; i++)
	{
		printf("Digite o salário do mês %d:\n", i+1);
		scanf("%f", &sal[i]);
	}
	
	printf("\n\nMês\t\tSalário");//Escreve "mês" dá um espaço e escreve "Salário"
	for(i=0; i<12; i++)
	printf("\n %02d\t\t%7.2f", i+1, sal[i]); //7.2f Armazena 7 caracteres
}
