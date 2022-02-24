#include <stdio.h>

void transposta(int matriz[][], int matrizT[][])
{
	int i, j;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			matrizT[j][i] = matriz[i][j];
		}
	}
};

int main()
{
	int i, j;
	int matriz[3][3] = {{3,6,9}, {1,5,9}, {8,4,5}};
	int matrizT[3][3];
	transposta(matriz, matrizT);
	printf("A matriz transposta deu: \n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d", matrizT[i][j];
		}
		printf("\n");
	}	
}
