#include <stdio.h>

int main()
{
	int mat[2][2], i, j, x, det;
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("Digite um número inteiro:\n");
			scanf("%d", &x);
			mat[i][j] = x;
		}
	}
	
	for(i=0; i<2; i++)
	{
		printf("\n");
		for(j=0; j<2; j++)
		{
			printf("%d \t", mat[i][j]);
		}
	}
	
	det =((mat[0][0])*(mat[1][1]))-((mat[0][1])*(mat[1][0]));
	
	printf("\nDeterminante da matriz: %d\n", det);
	
return 0;
}
