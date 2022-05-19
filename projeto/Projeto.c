#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <time.h>
// gcc -g -Wall -fopenmp -o main main.c
// ./main
double omp_get_wtime (void);
double start;
double end;
double SP;

int main(int argc, char* argv[])
{
  start = omp_get_wtime ();
  const int n = 100;
#pragma omp parallel
  {
    double S = 0.0;
#pragma omp for
    for(int i = 1; i < n+1; i++)
      {
        double j = i;
        S += (1/j);
      }
#pragma omp critical
    SP += S;
  }
  end = omp_get_wtime ();
  printf("Work took %f seconds\n", end - start);
  printf("Taylor %.10f \n", SP);
  return 0;
}
