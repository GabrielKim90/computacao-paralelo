#include <stdio.h>

void Modulo(int matriz[linha][coluna])
{
	int i, j;
	for(i=0; i<linha; i++)
	{
		for(j=0; j<coluna; j++)
		{
			if(matriz[linha][coluna]<0)
			{
				matriz[linha][coluna] = matriz[linha][coluna]*-1
			}
		}
	}
}

int main()
{
	int i, j;
	int matriz[3][3] = {{-9, -8, 5}, {5, -2, 9}, {1, 5, -2}};
	Modulo(matriz[3][3]);
}
