#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <time.h>
// gcc -g -Wall -fopenmp -o main main.c
// time ./main
double SP;

int main(int argc, char* argv[])
{
  int n = 2147483647;
#pragma omp parallel
  {
    double S = 0.0;
#pragma omp for
    for(int i = 1; i <= n; i++)
    omp_set_dynamic(1);
#pragma omp for
    for(int i = 1; i < n; i++)
      {
        double j = i;
        S += (1/j);
      }
#pragma omp critical
    SP += S;
  }
  printf("Taylor %.30f \n", SP);
  return 0;
}
//Esse codigo demora mais ou menos 1 minuto para rodar prof
//O speedup é aproximadamente 33, vai ser explicado na apresentação
