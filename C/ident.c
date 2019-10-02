#include <stdio.h>

int main()
{
	int mat[3][3], i, j, x;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Digite um número inteiro:\n");
			scanf("%d", &x);
			mat[i][j] = x;
		}
	}
	
	for(i=0; i<3; i++)
	{
		printf("\n");
		for(j=0; j<3; j++)
		{
			printf("%d \t", mat[i][j]);
		}
	}
	
	printf("\n");
	
	if(mat[0][0] == 1 && mat[1][1] == 1 && mat[2][2] == 1)
		printf("Matriz Identidade\n");
	else
		printf("Não é matriz identidade\n");
		
return 0;
}
