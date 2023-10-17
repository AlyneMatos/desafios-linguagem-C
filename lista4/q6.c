#include <stdio.h>
#include <stdlib.h>
#define TAM 20
int main(){

    char str[TAM];   
    char c[TAM];

    printf("Insira a string: ");
    scanf("\n%19[^\n]", str);

    for(int i = 0; i <= TAM; i++){
        *(c+i) = *(str+i);
    }

    printf("String:\t%s, END: %p\n", str, str);
    printf("Cópia:\t%s, END: %p\n", c, c);

    return 0;
}
