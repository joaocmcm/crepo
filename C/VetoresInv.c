#include <stdio.h>

int main()
{
	int vet1[5], vet2[5];
	int i;
	
	for(i=0; i<5; i++)
	{
		printf("Digite um número inteiro:\n");
		scanf("%d", &vet1[i]);
	}
	
	for(i=4; i>=0; i--)
	{
		vet2[i] = vet1[4-i];
	}
	
	printf("\n\nVetor1\t\tVetor2");
	
	for(i=0; i<5; i++)
	printf("\n %02d\t\t%2.2d", vet1[i], vet2[i]);
	
return 0;
}
