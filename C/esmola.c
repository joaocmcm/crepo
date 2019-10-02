#include <stdio.h>

int main()
{
	float horas, rango, ganho, total;
	
	total = 0;
	horas = 0;
	
	printf("Uma esmolinha pelo amor de Deus...\n");
	scanf("%f", &ganho);
	
	for(;total<50;)
	{	
		horas += (1.0/6.0);//0.16;
		total += ganho;
		//printf("%f horas\n", horas);
		//printf("%f rango\n", rango);
		printf("Uma esmolinha pelo amor de Deus...\n");
		scanf("%f", &ganho);
		if(horas >= 1)
		{
			rango += 3;
			horas = 0;
		}
	}
	printf("Posso voltar pra casa, ganhei R$%.2f e gastei R$%.2f com rango\n", total, rango);
	
	return 0;
}
