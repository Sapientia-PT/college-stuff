#include <stdio.h>
#include <signal.h>
#include <sys/time.h>
#include <stdlib.h>
#define MAX 50

char str[MAX];

void writeChar() {
    static int i = 0;
    if (str[i] != '\0'){
        printf("%c", str[i]);
        i++;
        signal(SIGALRM, writeChar);
    }else
        exit(0);
}

int main() {
    struct itimerval val;
    if (fgets(str, MAX, stdin) == NULL){
        perror("fgets");
        exit(-1);
    }
    setbuf(stdout, NULL); //desativa o buffering de escrita para a consola
    signal(SIGALRM, writeChar);
    val.it_interval.tv_sec = 1;
    val.it_interval.tv_usec = 0;
    val.it_value.tv_sec = 1;
    val.it_value.tv_usec = 0;
    setitimer(ITIMER_REAL, &val, 0);
    for (;;) ;
    return 0;
}