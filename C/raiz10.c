#include <stdio.h>
#include <math.h>

int main()
{
	int cont, num[10];
	float raiz[10];
	
	cont = 0;
	
	while(num[cont] > 0 || cont < 10)
	{
		printf("Digite um número (número negativo para sair)\n");
		scanf("%d", &num[cont]);
		cont ++;
		
		raiz[cont] = sqrt(num[cont]);
	}


	printf("\nAs raízes dos números digitados são:\n");
	
	for(cont = 0; cont<10; cont++)
	{
		printf("\nRaiz quadrada de %d é %0.2f\n", num[cont], raiz[cont]);
	}
	
return 0;
}
