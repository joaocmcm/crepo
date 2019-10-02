#include <stdio.h>
#include <string.h>


int main()
{
	char palavra[20];
	int i, v, c;
	
	v=0;
	c=0;
	
	printf("Digite uma palavra com no máximo 20 caracteres:\n");
	__fpurge(stdin);
	gets(palavra);
	
	for(i=0; i<strlen(palavra); i++)
	{
		if(palavra[i]=='a'||palavra[i]=='e'||palavra[i]=='i'||palavra[i]=='o'||palavra[i]=='u')
		{
			v++;
		}
		else c++;
	}
	
	printf("\n'%s' possui %d vogais e %d consoantes\n", palavra, v, c);
	
return 0;
}
