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

    printf("Introduza coeficientes do polinom. de 2 grau\n");
    printf("Introduza a:");
    scanf("%lf", &a);
    printf("Introduza b:");
    scanf("%lf", &b);
    printf("Introduza c:");
    scanf("%lf", &c);

    roots(a, b, c, rootsBuf);

    printf("roots: %lf and %lf\n", rootsBuf[0], rootsBuf[1]);

    // Test gcd below

    int x,y;
    printf("GCD(a,b) =\n");
    printf("Introduza a:");
    scanf("%d", &x);
    printf("Introduza b:");
    scanf("%d", &y);

    printf("GCD(%d,%d): %d\n", x, y, gcd(x,y));

    return 0;
}