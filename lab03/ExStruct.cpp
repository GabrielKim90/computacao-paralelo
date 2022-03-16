#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>

using namespace std;

const int tamanho=4;

typedef struct Pessoas
{
	string nome;
	float idade;
	float altura;
}Pessoa, Povo[tamanho];

bool compare(Pessoa A, Pessoa B)
{
	if(A.altura<B.altura)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	const int tamanho=4;
	struct Pessoas
	{
		string nome;
		float idade;
		float altura;
	}Pessoa, Povo[tamanho];
	int i;
	ifstream in("Pessoas.txt");

	if (!in)
	{
		cerr << "Erro na abertura do arquivo" << endl;
		system("PAUSE");
		exit(1);
	}
	for (int i=0;i<tamanho;i++)
	{
		cout << Povo[i].nome << " ";
		cout << Povo[i].idade << " ";
		cout << Povo[i].altura << " ";
	}
	return 0;
}
