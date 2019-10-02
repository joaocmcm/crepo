#include <stdio.h>

int main()
{
	int face[6], acertos, totAcertos, nATarget, d1f, d2f, d3f, d4f, d1, d2, d3, d4;
	double prob;
	
	face[0] = 0;
	face[1] = 1;
	face[2] = 1;
	face[3] = 2;
	face[4] = 2;
	face[5] = 0;
	
	do
	{
		
		totAcertos = 0;
		
		printf( "\nEntre com o número de acertos desejado, no máximo 8. Digite '9' para sair:\n");
		scanf("%i", &nATarget);
	
	
			for(d1 = 0; d1 <= 5; d1++)
			{
				d1f = face[d1];
				for(d2 = 0; d2 <= 5; d2++)
				{
					d2f = face[d2];
					for(d3 = 0; d3 <= 5; d3++)
					{
						d3f = face[d3];
						for(d4 = 0; d4 <= 5; d4++)
						{
							d4f = face[d4];
							acertos = d1f + d2f + d3f + d4f;
							
							if(acertos == nATarget)
							{
								totAcertos ++;
							}
						}	
					}	
				}	
			}
	
	prob = (totAcertos/1296.0)*100;
	
	if(nATarget != 9) printf( "\n %.2f%% de chances de obter %i acertos\n ", prob, nATarget);
	
	}while(nATarget != 9);
	
	return 0;
}