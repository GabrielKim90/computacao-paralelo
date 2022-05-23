#include <stdlib.h>
#include <omp.h>
#include <time.h>
// gcc -g -Wall -fopenmp -o main main.c
// ./main
double omp_get_wtime (void);
double start;
double end;
double SP;
int n = 2147483647;

int main(int argc, char* argv[])
{
  start = omp_get_wtime ();
  omp_set_dynamic(1);
  #pragma omp for
    for(int i = 1; i < n; i++)
      {
        double j = i;
        SP += (1/j);
      }
  end = omp_get_wtime ();
  printf("Work took %f seconds\n", end - start);
  printf("Taylor %lf \n", SP);
  return 0;
}
