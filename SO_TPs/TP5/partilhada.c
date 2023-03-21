#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <sys/wait.h> 

int main(int argc, char *argv[]){     
   int var = 100;     
   int ret = fork();     
   if (ret == -1){ 
      perror("fork");
      exit(1); 
   } else {
      if (ret == 0){  
         var = var + 100;
         printf("no filho: %d\n", var); 
      } else {
         wait(NULL);
         printf("no pai: %d\n", var); 
      }
   }
   return 0; 
} 
