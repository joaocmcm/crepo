#include <stdio.h>
#include <string.h>

int main()
{
	char nome[20];
	
	printf("\nDigite seu nome: ");
	__fpurge(stdin);//limpa o buffer de teclado
	gets(nome); //substitui o scanf para este caso, pois scanf reconhece 'espaço' como terminação!!
	
	printf("\nSeu nome é %s,", nome);
	printf("e possui %d caracteres.\n", strlen(nome));
	printf("A segunda letra do seu nome é %c,\n", nome[1]);
	
return 0;
}
