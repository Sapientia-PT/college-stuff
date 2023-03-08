
#include <stdio.h>
#include <stdlib.h>

int conta_a (char str []) {
    int i, count = 0;
    for (i = 0; str[i] != '\0'; i++)
        if (str[i] == 'a')
            count++;
    return count;
}

int count_vowels(char *inp){
    int i, count = 0;

    while(*inp != '\0'){
        if(*inp == 'a' || *inp == 'e'
            || *inp == 'i' || *inp == 'o' || *inp == 'u')
            count++;
        inp++;
    }

    return count;
}

int max_int_arr(int arr[], size_t size){
    int i = 0, max = arr[0];

    while(i < size){
        max = (arr[i] > max) ? arr[i] : max;
        i++;
    }

    return max;
}

int count_non_pos(int arr[], size_t size){
    int i = 0, count = 0;

    while(i < size)
        if(arr[i++] <= 0)
            count++;

    return count;
}

int str_len(char *p){
    int count = 0;
    
    while(*p++ != '\0')
        count++;

    return count;
}

int isIn(int x, int arr[], int len){
    int i;

    for(i = 0; i < len;i++)
        if(arr[i] == x)
            return 1;

    return 0;
}

void nub(int buf[], int arr[], int buf_len, int arr_len){ // Receives an int array buffer and a second array with the values from which we'll get the unique ones
    int i = 0;
    int j = 0; // A pointer to buf position where we're writing the next unique number

    while(i < arr_len){
        if(isIn(arr[i], buf, buf_len) == 0)
            buf[j++] = arr[i];
        i++;
    }

}

int is_matrix_id(int m[][3], int len){ // Max size of 10
    int i, j;

    for(i=0;i<len;i++)
        for(j=0;j<len;j++)
            if((i==j && m[i][j]!=1) || (i!=j && m[i][j]!=0))
                return 0;

    return 1;
}

struct Aval{
    int notaT;
    int notaE;
    int notaP;
};

struct Aluno{
    char nome[20];
    int numero;
    char email[40];
    struct Aval classificacao;
};

void aluno_fun(){

    struct Aluno aluno;

    printf("Introduza o seu nome: ");
    scanf("%s", aluno.nome);
    printf("Introduza o seu numero: ");
    scanf("%d", &aluno.numero);
    printf("Introduza o seu e-mail: ");
    scanf("%s", aluno.email);
    printf("Introduza (separadas por espacos) as suas notas de trabalho, exame e presencas, respetivamente:");
    scanf("%d", &aluno.classificacao.notaT);
    scanf("%d", &aluno.classificacao.notaE);
    scanf("%d", &aluno.classificacao.notaP);

    printf("--------------\nNome: %s\n", aluno.nome);
    printf("Numero: %d\n", aluno.numero);
    printf("E-mail: %s\n", aluno.email);
    printf("Media de Avaliacao: %.1f", (aluno.classificacao.notaT+aluno.classificacao.notaE+aluno.classificacao.notaP)/3.0f);

}

int main () {
    char msg [21];
    printf ("Qual a string?\n");
    scanf ("%20s", msg);
    printf ("A letra a ocorre %d vezes na string.\n", conta_a(msg));

    printf("A palavra contem %d vogais\n", count_vowels(msg));

    printf("A palavra tem %d letras\n", str_len(msg));

    int test_arr[] = {4,1,9,2};

    printf("Maximo do array e: %d\n", max_int_arr(test_arr, sizeof(test_arr)/sizeof(int)));

    int test_arr2[] = {-2,4,3,0,-1};

    printf("Numero de numeros nao positivos e: %d\n", count_non_pos(test_arr2, 6));

    /* int buf[5];
    int arr[5] = {1,5,1,3,5};
    nub(buf, arr, 5, 5);

    int i;
    for(i=0;i<5;i++)
        printf("%d\n", buf[i]); */

    int m[3][3] = {{1,0,0},{0,1,0},{0,0,1}};

    printf("Is identity?: %d\n", is_matrix_id(m, 3));

    aluno_fun();

    return 0;
}
