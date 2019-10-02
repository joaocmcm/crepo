#include <stdio.h>

int main()
{
	float mine_t, total, excesso;
	
	mine_t = 0;
	total = 0;
	
	printf("Informe a quantidade em toneladas do carregamento\n");
	scanf("%f", &mine_t);
	total += mine_t;
	
	while(total < 200)
	{	
		printf("Informe a quantidade em toneladas do carregamento\n");
		scanf("%f", &mine_t);
		total += mine_t;
	}
	
	excesso = total - 200;
	printf("A quantidade total de minério foi alcançada - %.1ft , excesso de %0.1ft\n", total, excesso);
	
	return 0;
}
