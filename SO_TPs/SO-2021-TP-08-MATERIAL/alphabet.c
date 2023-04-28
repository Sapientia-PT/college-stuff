#include <stdio.h>
#include <signal.h>
#include <sys/time.h>
#include <stdlib.h>

char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
int i = 0;

void writeAlphabetLetter() {
    if (alphabet[i] != '\0'){
        printf("%c", alphabet[i]);
        i++;
        signal(SIGALRM, writeAlphabetLetter);
    }else
        exit(0);
}

int main() {
    struct itimerval val;
    setbuf(stdout, NULL); //desativa o buffering de escrita para a consola
    signal(SIGALRM, writeAlphabetLetter);
    val.it_interval.tv_sec = 2;
    val.it_interval.tv_usec = 0;
    val.it_value.tv_sec = 2;
    val.it_value.tv_usec = 0;
    setitimer(ITIMER_REAL, &val, 0);
    for (;;) ;
    return 0;
}