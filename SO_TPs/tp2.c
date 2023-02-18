#include <stdio.h>

int main(){

    int x = 13;
    int *p = &x;
    
    printf("%p\n", p);
    printf("%d\n", *p);
    printf("%d\n", *(&x));

    char msg[] = "teste string";
    char *p_msg = msg;

    printf("%c\n", *p_msg);

    int i = 0;

    while(msg[i] != '\0')
        printf("%c", msg[i++]);
    printf("\n");

    while(*p_msg != '\0')
        printf("%c", *p_msg++);
    printf("\n");

    
}