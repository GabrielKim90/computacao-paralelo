#include <stdio.h>

int main()
{
	int i, j, linha, coluna, linhaD, colunaD, x, y;
	printf("Digite quantas linha ha: ");
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

	printf("\nDigite por quanto sera multiplicado: ");
	scanf("%d", &x);
	printf("\nDigite se deseja multiplicar linha ou colunda: ");
	scanf(&y);
	if(y=="linha")
	{
		printf("\nDigite qual linha sera multiplicado: ");
		scanf("%d", &linhaD);
		for(j=0; j<coluna; j++)
		{
			matriz[linhaD][j] = matriz[linhaD][j]*x;
		}
	}
	else if(y=="coluna")
	{
		printf("\nDigite qual coluna sera multiplicado: ");
		scanf("%d", &colunaD);
		for(i=0; i<linha; i++)
		{
			matriz[i][colunaD] = matriz[i][colunaD]*x;
		}
	}
	else
	{
		printf("Escolha invalido");
		return 1;
	}
	printf("\nA matriz multiplicada\n");
	for(i=0; i<linha; i++)
	{
		for(j=0; j<coluna; j++)
		{
			printf("%d", matriz[i][j]);
		}
		printf("\n");
	}
}
