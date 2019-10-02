#include <stdio.h>

void data(int x, int y, int z)
{
	printf("\n%02d/%02d/%d\n", x, y, z); //"02" completa com zeros a esquerda para mostrar 2 algarismos
}

int main()
{
	int x, y, z, z1;

	printf("\nDigite o dia:\n");
	scanf("%d", &x);
	printf("\nDigite o mês:\n");
	scanf("%d", &y);
	printf("\nDigite o ano:\n");
	scanf("%d", &z);
	
	data(x, y, z);
	
	printf("\nDigite o dia:\n");
	scanf("%d", &x);
	printf("\nDigite o mês:\n");
	scanf("%d", &y);
	printf("\nDigite o ano:\n");
	scanf("%d", &z1);
	
	data(x, y, z1);
	
	if(z1>z)printf("\nA primeira pessoa, nascida em '%d' é mais velha\n", z);
		else if(z1<z)printf("\nA segunda pessoa, nascida em '%d' é mais velha\n", z1);
		else printf("\nAs duas pessoas possuem a mesma idade\n");

return 0;
}
