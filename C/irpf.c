#include <stdio.h>

int main()
{
	float salario, irpf;
	
	printf("Digite o seu salário\n");
	scanf("%f", &salario);
	
	if(salario <= 1500)
	{
		printf("Isento\n");
	}
	else
	{
		if(salario > 1500 || salario <= 3200)
		{	
			irpf = salario * 0.15;			
			printf("O valor do IRPF é R$%0.2f\n", irpf);
		}
		else
		{
			irpf = salario * 0.20;
			printf("O valor do IRPF é R$%0.2f\n", irpf);
		}
	}
	
	return 0;
}
