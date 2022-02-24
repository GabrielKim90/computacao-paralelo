#include <stdio.h>

struct pessoa
{
	char nome[50];
	float idade;
	float peso;
	float altura;
};

int main()
{
	struct pessoa Pessoa1, Pessoa2, Pessoa3;
	int Nome, Idade, Peso, Altura;

	printf("Digite o nome da primeira pessoa: ");
	scanf(&Nome);
	Pessoa1.nome = Nome;

	printf("\nDigite a idade da primeira pessoa: ");
	scanf("%d", &Idade);
	Pessoa1.idade = Idade;

	printf("\nDigite o peso da primeira pessoa: ");
	scanf("%d", &Peso);
	Pessoa1.peso = Peso;

	printf("\nDigite a altura da primeira pessoa; ");
	scanf("%d", &Altura);
	Pessoa1.altura = Altura;

	printf("\nDigite o nome da segunda pessoa: ");
	scanf(&Nome);
	Pessoa2.nome = Nome;

	printf("\nDigite a idade da segunda pessoa: ");
	scanf("%d", &Idade);
	Pessoa2.idade = Idade;

	printf("\nDigite o peso da segunda pessoa: ");
	scanf("%d", &Peso);
	Pessoa2.peso = Peso;

	printf("\nDigite a altura da segunda pessoa: ");
	scanf("%d", &Altura);
	Pessoa2.altura = Altura;

	printf("\nDigite o nome da terceira pessoa: ");
	scanf(&Nome);
	Pessoa3.nome = Nome;

	printf("\nDigite a idade da terceira pessoa: ");
	scanf("%d", &Idade);
	Pessoa3.idade = Idade;

	printf("\nDigite o peso da terceira pessoa: ");
	scanf("%d", &Peso);
	Pessoa3.peso = Peso;

	printf("\nDigite a altura da terceira pessoa: ");
	scanf("%d", &Altura);
	Pessoa3.altura = Altura;
}
