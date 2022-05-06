//Para rodar é necessario de colocar "ulimit -s newvalue" no command line
//Testamos com o newvalue de 1024 para funcionar
//Command line "ulimit -s 1024"
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <time.h>

int thread_count;

long long n;
double SP = 0;
double S = 0;
clock_t start, end;
//O cpu_time_used foi o tempo usado pela maquina para completar 100 loops por um so thread
double cpu_time_used = 0.000067999999999999999463970446;
double cpu_time_usedP;

void* Thread_sum(void* rank);

int main(int argc, char* argv[])
{
  start = clock();
  long thread;
  pthread_t* thread_handles;
  n = 100.0;
  
  thread_count = strtol(argv[1], NULL, 10);
  thread_handles = malloc(thread_count*sizeof(pthread_t));
  for(thread = 0; thread < thread_count; thread++)
  {
    pthread_create(&thread_handles[thread], NULL, Thread_sum, (void*)thread);
  }
  
  for(thread = 0; thread < thread_count; thread++)
  {
    pthread_join(thread_handles[thread], NULL);
  }
  free(thread_handles);
  end = clock();
  cpu_time_usedP = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("\n%.30f", cpu_time_usedP);
  double speedup = cpu_time_used/cpu_time_usedP;
  return 0;
}

void* Thread_sum(void* rank)
{
  long my_rank = (long) rank;
  long long i;
  long long my_n = n/thread_count;
  long long my_first_i = my_n*my_rank;
  long long my_last_i = my_first_i + my_n;
  for(i = my_first_i; i < my_last_i; i++)
  {
    SP += (1/i);
  }
  printf("%.30f", SP);
  return NULL;
}

