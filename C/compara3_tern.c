#include <stdio.h>
int main()
{
	int n1, n2, n3, maior, menor;
	
	printf("Digite um número inteiro\n");
	scanf("%d", &n1);
	printf("Digite outro inteiro\n");
	scanf("%d", &n2);
	printf("Digite mais um inteiro\n");
	scanf("%d", &n3);
	
	maior = n1>n2 ? (n1>n3?n1:n3) : (n2>n3?n2:n3);
	menor = n1<n2 ? (n1<n3?n1:n3) : (n2<n3?n2:n3);
	
	printf("O menor número digitado foi %d\n", menor);
	printf("O maior número digitado foi %d\n", maior);
	
	return 0;
}
