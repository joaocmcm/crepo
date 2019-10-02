#include <stdio.h>
#include <string.h>

int verificapar(int y)
{
	if(y%2 == 0) return 1;
		else return 0;
}

int main()
{
	int x, z;
	
	printf("\nDigite um valor\n");
	scanf("%d", &x);
	
	z = verificapar(x);
	
	if(z==1) printf("'%d' é par\n", x);
		else printf("'%d' é ímpar\n", x);
		
return 0;
}
