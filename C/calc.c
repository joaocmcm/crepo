#include <stdio.h>

int main()
{
	float n1, n2, r;
	int op, resto;
	

	printf("Escolha um tipo de operação:\n1-Soma\n2-Subtração\n3-Multiplicação\n4-Divisão\n");
	scanf("%d", &op);
	
	printf("Digite um numero inteiro\n");
	scanf("%f", &n1);
	printf("Digite outro numero inteiro\n");
	scanf("%f", &n2);
	
	switch(op)
	{
		case 1:
			r = n1 + n2;
			printf("A soma dos dois numeros digitados é %.1f\n", r);
			break;
		case 2:
			r = n1 - n2;
			printf("A subtração dos dois numeros digitados é %.1f\n", r);
			break;
		case 3:
			r = n1 * n2;
			printf("A multiplicação dos dois numeros digitados é %.1f\n", r);
			break;
		case 4:
			r = n1 / n2;
			printf("A divisão entre os dois numeros digitados é %.1f\n", r);
			break;
		default:
			printf("Operação inválida\n");
	}
	
	return 0;
}
