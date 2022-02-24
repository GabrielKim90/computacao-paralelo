#include <stdio.h>

int main
{
	int i, j, linha, coluna;
	printf("Digite a linha: ");
	scanf("%d", &linha);
	pringf("\nDigite a coluna: ");
	scanf("%d", &coluna);
	int matriz[linha][coluna];
	int matrizT[coluna][linha];

	for(i=0; i<linha; i++)
	{
		for(j=0; j<coluna; j++)
		{
			printf("\nDigite o numero da matriz: ");
			scanf("%d", &matriz[i][j]);
		}
	}

	for(i=0; i<linha; i++)
	{
		for(j=0; j<coluna; j++)
		{
			matrizT[j][i] = matriz[i][j];
		}
	}

	printf("\nA matriz transposta");
	for(i=0; i<linha; i++)
	{
		for(j=0; j<coluna; j++)
		{
			printf("%d", "\n", matrizT[i][j]); 
		}
	}
}
