#include <stdio.h>

int main()
{
	int mat[3][3], l, c;
	
	for(l=0; l<3; l++)
	{
		for(c=0; c<3; c++)
		{
			mat[l][c] = l*c;
		}
	}
	
	for(l=0; l<3; l++)
	{
		printf("\n");
		for(c=0; c<3; c++)
		{
			printf("%d \t", mat[l][c]);
		}
	}
	
	printf("\n");
return 0;
}
