#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, q;
	
	q = 0;
	printf("\nNúmeros:\n\n");
	
	while(q < 6)
	{
		
		srand(time(NULL));
		x = 1 + rand() %60;
		printf(" %d\n", x);
		q++;
		sleep(1);
	}
	
	printf("\n");
	
return 0;
}
