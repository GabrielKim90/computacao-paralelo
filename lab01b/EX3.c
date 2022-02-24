#include <stdio.h>

int main()
{
	int i, j;
	int maximo = 0;
	int vertical = 0;

	while(maximo % 2 == 0)
	{
		printf("Digite o numero maximo impar: \n");
	}

	vertical = maximo/2 + 1;
	for(i=0; i<=vertical; i++;)
	{
		for(j=i+1; j<=vertical-i; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
}
