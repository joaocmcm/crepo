#include <stdio.h>

int main()
{
	int x, resto, c;
	
	printf("Informe um número inteiro\n");
	scanf("%d", &x);
	
	//FILTRO DE NUMEROS INVALIDOS
	if(x == 1 || x == 0 || x < 0) resto = 0;printf("Número inválido\n");
	for(c = 2; c < x; c++)
	{
		resto = x%c;
		if(resto == 0)
		{
			c = x;
			printf("O número %d não é primo\n", x);
		}
	}
	
	if(resto > 0)
	{
		printf("O número %d é primo\n", x);
	}
	
	return 0;
}
