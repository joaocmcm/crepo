#include <stdio.h>

int main()
{
	float peso, altura, imc;
	
	printf("Digite seu peso em Kg\n");
	scanf("%f", &peso);
	printf("Digite sua altura em metros\n");
	scanf("%f", &altura);
	
	imc = peso/(altura*altura);
	
	if(imc < 18.5) printf("IMC = %0.1f\nAbaixo do peso normal\n", imc);
	else if(imc > 18.5 && imc <= 24.9) printf("IMC = %0.1f\nPeso normal\n", imc);
		else if(imc > 24.9 && imc <= 29.9) printf("IMC = %0.1f\nSobrepeso\n", imc);
			else if(imc > 29.9 && imc <= 34.9) printf("IMC = %0.1f\nObesidade grau 1\n", imc);
				else if(imc > 34.9 && imc <= 39.9) printf("IMC = %0.1f\nObesidade grau II\n", imc);
					else printf("IMC = %0.1f\nObesidade grau III\n", imc);
	
	return 0;
}
