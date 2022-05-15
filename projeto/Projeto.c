#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <time.h>

int thread_count;
double sum = 0.0;
double factor = 0.0;
double omp_get_wtime (void);
double start;
double end;
double SP;
int n = 100;

int main(int argc, char* argv[])
{
  start = omp_get_wtime ();
  omp_set_num_threads(10);
  thread_count = strtol(argv[1], NULL, 10);
  #pragma omp parallel for
  for (int i = 1; i < n; i++) 
  {
   double j = i; 
   SP += (1/j);
  }
  
  end = omp_get_wtime ();
  printf("Work took %f seconds\n", end - start);
  printf("Taylor %lf \n", SP);
  return 0;
}
