#include <stdio.h>

int main()
{
	int idade, x;
	
	printf("Digite sua idade\n");
	scanf("%d", &idade);
	
	if(idade >= 18 && idade <= 70)
	{	
		printf("Eleitor obrigatório\n");
	}
	else
	{
		if(idade < 16)
		{
			x = 16 - idade;
			printf("Faltam %d anos para se tornar eleitor opcional\n", x);
		}
		
		if(idade > 70 || idade >= 16)
		{
			printf("Eleitor opcional\n");
		}
	}
	
	return 0;
	
}
