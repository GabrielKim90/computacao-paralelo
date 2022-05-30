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

omp_set_dynamic(1);
#pragma omp for
  for(int i = 1; i < n; i++)
  {
    double j = i;
    SP += (1/j);
  }
  printf("Taylor %.30f \n", SP);
  return 0;
}
