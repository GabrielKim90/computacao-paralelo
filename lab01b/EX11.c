#include <stdio.h>

void soma(int matriz[linha][coluna])
{
	int i = 1;
	for(j=0; j<coluna; j++)
	{
		matriz[i][j] = matriz[i-1][j] + matriz[i][j];
	}
}

void multi(int matriz[linha][coluna])
{
	int i = 1;
	for(j=0; j<coluna; j++)
	{
		matriz[i][j] = matriz[i-1][j] * matriz[i][j];
	}
}

int main()
{
	int i, j;
	int matriz[2]]2] = {{2, 4}, {5, 6}};
	int matriz2[2][2] = {{4, 6}, {8, 1}};
	soma(matriz[2][2]);
	multi(matriz2[2][2]);
}
