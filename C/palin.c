#include <stdio.h>
#include <string.h>

int main()
{
	char p1[20], p2[20];
	int i, x;
	
	i = 0;
	x = 0;
	
	printf("\nDigite uma palavra:\n");
	__fpurge(stdin);
	gets(p1);
	
	printf("\nDigite outra palavra:\n");
	__fpurge(stdin);
	gets(p2);
	
	for(i=0; i<strlen(p1); i++)
	{
		if(p1[i] != p2[strlen(p2)-1-i])
		{
			i = 20;
			x = 1;
		}
	}
	
	if(x==1)printf("\n'%s' e '%s' não são palíndromas\n", p1, p2);
		else printf("\n'%s' e '%s' são palíndromas\n", p1, p2);
		
return 0;
}
