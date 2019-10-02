#include <stdio.h>
int main()
{
	int x, y, z;
	
	printf("Digite um número inteiro\n");
	scanf("%d", &x);
	printf("Digite outro número inteiro\n");
	scanf("%d", &y);
	printf("Digite mais um número inteiro\n");
	scanf("%d", &z);
	
	if(x > z && x > y)
	{
		if(y > z)
		{
		printf("%d foi o maior número digitado\n", x);
		printf("%d foi o menor número digitado\n", z);
		}
		else
		{
			if(y == z)
			{
				printf("%d foi o maior número digitado\n", x);
				printf("%d e %d são iguais\n", z, y);
			}
			else
			{
				printf("%d foi o maior número digitado\n", x);
				printf("%d foi o menor número digitado\n", y);
			}
		}
	}
	
	if(y > x && y > z)
	{
		if(x > z)
		{
		printf("%d foi o maior número digitado\n", y);
		printf("%d foi o menor número digitado\n", z);
		}
		else
		{
			if(x == z)
			{
				printf("%d foi o maior número digitado\n", y);
				printf("%d e %d são iguais\n", z, x);
			}
			else
			{
				printf("%d foi o maior número digitado\n", y);
				printf("%d foi o menor número digitado\n", x);
			}
		}
	}
	
	if(z > x && z > y)
	{
		if(x > y)
		{
		printf("%d foi o maior número digitado\n", z);
		printf("%d foi o menor número digitado\n", y);
		}
		else
		{
			if(x == z)
			{
				printf("%d foi o maior número digitado\n", z);
				printf("%d e %d são iguais\n", y, x);
			}
			else
			{
				printf("%d foi o maior número digitado\n", z);
				printf("%d foi o menor número digitado\n", x);
			}
		}
	}
	
	return 0;
	
}
