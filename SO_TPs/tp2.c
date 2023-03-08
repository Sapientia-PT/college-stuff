#include <stdio.h>
#include <string.h>

void whatever();

union type_org {
    float num_real;
    char vector [4];
    unsigned num_int;
};

typedef struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} Book;

int main(int argc, char *argv[]){

    printf("%d\n",argc);
    for(int i=0;i<argc;i++)
        printf("%s\n", argv[i]);

    whatever();

    return 0;
}

void whatever(){

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

    union type_org a;
    a.num_real = 2.0;
    printf("%.1f\n",a.num_real);

    Book book;

    strcpy(book.title, "HP Chamber Of Secrets");

    printf("Book name: %s\n", book.title);
    
}