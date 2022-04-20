#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/wait.h>
#include <sys/unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_COUNT 200

int main()
{
    int *shmPTR;
    pid_t pid;
    int status;
    int key = 100;
    int size = 1024;
    
    int shmID = shmget(key, size, IPC_CREAT | 0400);
    
    shmPTR = (int *) shmat(shmID, NULL, 0);
    
    int i = 5;
    shmPTR[0] = i;
    
    pid = fork();
    
    if (pid < 0)
    {
        printf("Erro");
        exit(1);
    }
    else if (pid == 0)
    {
        int x = shmPTR[0];
        x = x + 5;
        shmPTR[0] = x;
    }
    else
    {
        printf("%d", shmPTR[0]);
        wait(&status);
        i = shmPTR[0];
        i = i*2;
        shmPTR[0] = i;
        printf("%d", shmPTR[0]);
    }
}
