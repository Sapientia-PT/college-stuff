#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>

sem_t *sem;

void *rout(void *x){
    sem_wait(sem);
    printf("Acquired semaphore\n");
    printf("Print %d\n", (int)(intptr_t)x);
    sleep(2);
    sem_post(sem);
    printf("Released semaphore\n");
    return NULL;
}

int main(int argc, char *argv[]){

    pthread_t t[2];
    int i;

    sem = sem_open("caralho", O_CREAT, S_IRUSR | S_IWUSR, 1);
    if (sem == SEM_FAILED) {
        perror("sem_open failed");
        exit(1);
    }

    for(i=0;i < 2;i++)
        pthread_create(&t[i], NULL, rout, (void *)(intptr_t)i);

    for(i=0;i < 2;i++)
        pthread_join(t[i], NULL);

    sem_close(sem);
    sem_unlink("caralho");
    exit(0);
}
