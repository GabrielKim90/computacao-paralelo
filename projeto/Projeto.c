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
double cpu_time_used = 0.000067999999999999999463970446;
double cpu_time_usedP;
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
  cpu_time_usedP = ((double) (end - start)) / CLOCKS_PER_SEC;
  double speedup = cpu_time_used/cpu_time_usedP;
  printf("Speedup final %f\n", speedup);
  printf("Work took %f seconds\n", end - start);
  printf("Taylor %lf \n", SP);
  return 0;
}
