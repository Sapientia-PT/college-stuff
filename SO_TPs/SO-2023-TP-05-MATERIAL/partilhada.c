#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <sys/wait.h> 
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char *argv[]){     
   int var = 100;     
   int ret = fork();

   int fd = shm_open("/partilhada", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
   ftruncate(fd, sizeof(int));
   int *ptr = mmap(0, sizeof(int), PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
   *ptr = var;

   if (ret == -1){ 
      perror("fork");
      exit(1); 
   } else {
      if (ret == 0){  
         *ptr = *ptr + 50;
         printf("no filho: %d\n", *ptr); 
      } else {
         wait(NULL);
         printf("no pai: %d\n", *ptr);
         munmap(ptr, sizeof(int));
         shm_unlink("/partilhada");
      }
   }

   return 0; 
} 
