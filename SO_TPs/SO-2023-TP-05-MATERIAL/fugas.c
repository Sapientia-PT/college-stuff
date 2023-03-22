#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 

struct aluno {   
   int numero;   
   char *nome; 
   int *notas; 
}; 

int main(int argc, char *argv[]) {   
   struct aluno *cobaia;   
   struct aluno *atento; 
   cobaia = malloc(sizeof(struct aluno));
   atento = malloc(sizeof(struct aluno)); 
   cobaia->notas= malloc(2 * sizeof(int)); 
   atento->notas = calloc(2, sizeof(int)); 
   cobaia->numero = 51000;   
   atento->numero = 52000;   
   cobaia->nome = "Joaquim Saudade";   
   atento->nome = "Manuel Cenoura";   
   cobaia->notas[0] = 20;   
   cobaia->notas[1] = 18;   
   atento->notas[2] = 17;   
   atento->notas[3] = 18; 

   printf("Aluno: %d - %s Nota: T1 %d T2 %d\n", cobaia->numero, cobaia->nome, 
         cobaia->notas[2], cobaia->notas[3]); 
   printf("Aluno: %d - %s Nota: T1 %d T2 %d\n", atento->numero, atento->nome, 
         atento->notas[0], atento->notas[1]);   
   free(atento);

   return 0; 
}
