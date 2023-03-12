#include <stdio.h>
#include "funcoes.h"

int main()
{
    /* int num;
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
        printf("O numero eh negativo.\n"); */

    // Test roots below

    double rootsBuf[2];

    double a,b,c;

    printf("Introduza a:");
    scanf("%lf", &a);
    printf("Introduza b:");
    scanf("%lf", &b);
    printf("Introduza c:");
    scanf("%lf", &c);

    roots(a, b, c, rootsBuf);

    printf("roots: %lf and %lf", rootsBuf[0], rootsBuf[1]);

    return 0;
}