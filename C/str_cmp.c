#include <stdio.h>
#include <string.h>

int main()
{
	char p1[20], p2[20];
	int i, x;
	
	x = 1;
	
	printf("\nDigite uma palavra:\n");
	__fpurge(stdin);
	gets(p1);
	
	printf("\nDigite outra palavra:\n");
	__fpurge(stdin);
	gets(p2);
	
	for(i=0; i<strlen(p1)||i<strlen(p2); i++)
	{
		if(p1[i]!=p2[i])
		{
			x = 0;
			i = 50;
		}  
	}
	
	if(x == 1)printf("\nAs palavras são iguais\n");
		else printf("\nAs palavras são diferentes\n");

return 0;
}
