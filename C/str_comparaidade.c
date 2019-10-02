#include <stdio.h>
#include <string.h>


int main()
{
	int id1, id2;
	char nome[20], nome2[20];
	
	printf("Informe o nome da primeira pessoa:\n");
	__fpurge(stdin);
	gets(nome);	
	printf("Informe a idade:\n");
	scanf("%d", &id1);
	
	printf("Informe o nome da segunda pessoa:\n");
	__fpurge(stdin);
	gets(nome2);	
	printf("Informe a idade:\n");
	scanf("%d", &id2);
	
	if(id1>id2)
	{
		printf("%s é o(a) mais velho(a) com %d anos\n", nome, id1);
	}
	else
	{
		if(id2>id1)
		{
			printf("%s é o(a) mais velho(a) com %d anos\n", nome2, id2);
		}
		else printf("As duas pessoas possuem a mesma idade\n");
	}
		
return 0;
}
