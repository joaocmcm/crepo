#include <stdio.h>

int main()
{
	float salario, irpf;
	
	printf("Digite o seu salário\n");
	scanf("%f", &salario);
	
	if(salario <= 1500)	printf("Isento\n");
	else
	{
		irpf = salario <= 3200 ? (salario * 0.15) : (salario * 0.20); 
	
		printf("Valor do IRPF é R$%0.2f\n", irpf);
	}
	
	return 0;
}
