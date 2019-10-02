#include <stdio.h>
#include <string.h>

int main()
{
	char p1[50], p2[50];
	int i;
	
	printf("\nDigite uma palavra:\n");
	__fpurge(stdin);
	gets(p1);
	
	for(i=0; i<strlen(p1); i++)
	{
		p2[strlen(p1)-1-i] = p1[i];
	}
	
	p2[i] = 0;
	
	printf("\n '%s' ao contrário é '%s'\n", p1, p2);
	
return 0;
	
}
