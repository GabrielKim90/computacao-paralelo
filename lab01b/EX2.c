#include <stdio.h>

int main()
{
	float N1, N2, N3, ME, MA;
	printf("Escreva a N1 do aluno \n");
	scanf("%f", &N1);
	printf("Escreva a N2 do aluno \n");
	scanf("%f", &N2);
	printf("Escreva a N3 do aluno \n");
	scanf("%f", &N3);
	printf("Escreva a ME do aluno \n");
	scanf("%f", &ME);
	MA = (N1+N2*2+N3*3+ME)/7;
	if(MA>=9)
		printf("A");
	else if(MA>=7.5 && MA<9)
		printf("B");
	else if(MA>=6 && MA<7.5)
		printf("C");
	else if(MA>=4 && MA<6)
		printf("D");
	else
		printf("E");
}
