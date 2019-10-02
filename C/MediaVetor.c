#include <stdio.h>

int main()
{
	float el[10];
	float soma, media;
	int i;
	
	for(i=0; i<10; i++)
	{
		printf("Digite um número inteiro\n");
		scanf("%f", &el[i]);
	}
	
	for(i=0; i<10; i++)
	{
		soma += el[i];
	}
	
	media = soma/10;
	printf("Soma é %.2f\n", soma);
	printf("Média é %.2f\n", media);
	
return 0;
}
