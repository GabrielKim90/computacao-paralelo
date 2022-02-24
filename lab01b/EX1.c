#include <stdio.h>

int main()
{
	int i, j;
	int menor = 0;
	int matriz[3][3] = {{5, 2, 3}, {9, 1, 4}, {7, 8, 5}};
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			if(matriz[i][j] < menor)
			{
				menor = matriz[i][j];
			}
		}
	}
	printf("O menor numero da matriz:  ");
	printf("%d", menor);
}
