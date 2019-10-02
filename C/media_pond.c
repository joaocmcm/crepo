#include <stdio.h>
#include <string.h>

int main()
{
	float lab, ex_s, ex_f, media;
	char nome[25], clas;
	
	printf("Nome do estudante:\n");
	gets(nome);
	
	printf("Nota do laboratorio:\n");
	scanf("%f", &lab);
	printf("Nota do exame semestral:\n");
	scanf("%f", &ex_s);
	printf("Nota do exame final:\n");
	scanf("%f", &ex_f);
	
	media = (((lab*2.0) + (ex_s*3.0) + (ex_f*5.0))/10);
	
	if(media >= 0.5 && media < 5.6)clas = 'R';
	else
	{
		if(media >= 5.6 && media < 6.7)clas = 'D';
		else
		{
			if(media >= 6.7 && media < 7.8)clas = 'C';
			else
			{
				if(media >= 7.8 && media < 8.1)clas = 'B';
				else
				{
					if(media >= 8.1)clas = 'A';
				}
			}
		}
	}
	
	printf("Nome:%s\n", nome);
	printf("Média final:%.1f\n", media);
	printf("Classificação:%c\n", clas);
	
	
	return 0;
}
