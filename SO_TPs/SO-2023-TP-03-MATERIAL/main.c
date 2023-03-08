#include <stdio.h>
#include "funcoes.h"

int main()
{
    int num;
    printf("Insira um numero inteiro: ");
    scanf("%d", &num);
    if (num_par(num))
    {
        printf("O numero eh par.\n");
    }
    else
    {
        printf("O numero eh impar.\n");
    }

    if(positivo(num))
        printf("O numero eh positivo.\n");
    else
        printf("O numero eh negativo.\n");

    return 0;
}