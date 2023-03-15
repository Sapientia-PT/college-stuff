#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[]){

    int n = atoi(argv[1]);
    int i;

    for(i=0;i < n;i++){

        pid_t pid = fork();

        if(pid == 0){
        	printf("Child PID: %d\n", getpid());
        	exit(0);
        }
    }
}

