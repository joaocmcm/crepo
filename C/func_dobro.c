#include <stdio.h>

int dobro(int x)
{
	return (2*x);
}

int main()
{
	int y, z;
	
	printf("\nDigite um número\n");
	scanf("%d", &y);
	z = dobro(y);
	
	printf("\nO dobro de '%d' é '%d'\n", y, z);
	
return 0;
}
