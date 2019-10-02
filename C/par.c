#include <stdio.h>

int main()
{
	int n, resto;
	
	printf("Digite um número inteiro\n");
	scanf("%d", &n);
	
	resto = n % 2;
	
	if(resto != 0)
	{
		printf("%d não é um número par\n", n);
	}
	else
	{
		printf("%d é um número par\n", n);
	}
	
	return 0;
}
