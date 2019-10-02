#include <stdio.h>
#include <string.h>

int main()
{
	char palavra[50];
	int i, tam;
	
	tam = 0;
	
	printf("\nDigite uma palavra ou frase:\n");
	__fpurge(stdin);
	gets(palavra);
	
	for(i=0; i<50; i++)
	{
		if(palavra[i] != 0)
		{
			tam ++;
		}
		else
		{
			i = 50;
		}	
	}
	
	printf("\n'%s' possui %d caracteres\n", palavra, tam);
	
return 0;
}
