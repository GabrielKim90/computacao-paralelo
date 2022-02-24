#include <stdio.h>

void multiplicacao(int matriz[linha][coluna])
{
	int x, y, linhaD, colunaD;
	printf("Digite quanto sera multiplicado");
	scanf("%d", &x);
	
	printf("Digite se deseja ser linha ou coluna");
	scanf(&y);
	if(y == "linha")
	{
		printf("\nDigite qual linha sera multiplicado");
		scanf("%d", &linhaD);
		for(j=0; j<coluna; j++)
		{
			matriz[linhaD][j] = matriz[linhaD][j]*x;
		}
	}
	else if(y == "coluna")
	{
		printf("\nDigite qual coluna sera multiplicado");
		scanf("%d", &colunaD);
		for(i=0; i<linha; i++)
		{
			matriz[i][colunaD] = matriz[i][colunaD]*x;
		}
	}
	else
	{
		printf("\nEscolha invalido");
		return 1;
	}
}

int main()
{
	int i, j, linha, coluna, linhaD, colunaD;
	printf("Digite quantas linhas ha: ");
	scanf("%d", &linha);
	printf("\nDigite quantas colunas ha: ");
	scanf("%d", &coluna);
	int matriz[linha][coluna];

	for(i=0; i<linha; i++)
	{
		for(j=0; j<coluna; j++)
		{
			printf("\nDigite o numero da matriz: ");
			scanf("%d", &matriz[i][j]);
		}
	}

	multiplicacao(matriz[linha][coluna]);
}
