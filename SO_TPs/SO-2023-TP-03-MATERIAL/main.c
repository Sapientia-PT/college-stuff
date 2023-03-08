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
    return 0;
}