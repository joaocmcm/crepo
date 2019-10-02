#include <stdio.h>

int main()
{
	float alt_pe, alt_pa;
	int c;
	
	c = 0;
	
	printf("Informe a altura de Pedro\n");
	scanf("%f", &alt_pe);
	printf("Informe a altura de Paulo\n");
	scanf("%f", &alt_pa);
	
	if(alt_pe < alt_pa)
	{
		while(alt_pe < alt_pa)
		{
			c++;
			alt_pe += 0.03;
			alt_pa += 0.02;
		}
		
		printf("Em %d anos pedro será da mesma altura de Paulo, com %.2fm e Paulo com %.2fm\n", c, alt_pe, alt_pa);
	}
	else
	{
		printf("Pedro é mais alto que paulo\n");
	}
	
	return 0;
}
