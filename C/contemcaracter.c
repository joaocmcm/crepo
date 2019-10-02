#include <stdio.h>
#include <string.h>

int main()
{
	char p1[20], c;
	int i, x;
	
	x = 0;
	
	printf("\nDigite uma palavra:\n");
	__fpurge(stdin);
	gets(p1);
	
	printf("\nDigite um caracter\n");
	__fpurge(stdin);
	scanf("%c", &c);
	
	for(i=0; i<strlen(p1); i++) //STRLEN RETORNA O TAMANHO DO QUE FOI DIGITADO!
	{
		if(p1[i] == c) x = 1;
	}
	
	if(x == 1) printf("\nA palavra '%s' contém o caracter '%c'.\n", p1, c);
		else printf("\nA palavra '%s' não contém o caracter '%c'.\n", p1, c);
	
return 0;
}
