#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dado;
	
	printf("\nTecle ESPAÇO ou ENTER para sair\n");
	
	while(1)
	{
		if(getc(stdin) == '\n') return; //O número de vezes que este loop será executado será igual ao número de caracteres digitados antes de '\n' que é ENTER!! 
		srand(time(NULL));
		dado = 1 + rand() %6;
		printf("\nDado: %d\n", dado);
	}
	
return 0;
}

