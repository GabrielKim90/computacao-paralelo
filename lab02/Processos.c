#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	pid_t pid;

	int X = atoi(agrv[1]);

	if (argc != 2)
	{
		printf("Existem argumentos extras ou falta argumento");
		return 0;
	}

	if (X < 0)
	{
		printf("\nO numero inserido no terminal é menor que 0 %d", X);
		return 0;
	}

	pid = fork();
	
	if (pid < 0)
	{
		printf("\nO processo filho nao foi criado");
		return 0;
	}

	else if (pid == 0)
	{
		int i, num, j;
		num = atoi(argv[1]);
		printf("O numero é: %d", argv[1]);
		j = num;
		for (i=1; j>1; j=j-1)
		{
			i=i*j;
		}
		printf("O fatorial de %d é %d\n", num, i);
	}
	else
	{
		wait(NULL);
		printf("FIM\n");
	}
}
