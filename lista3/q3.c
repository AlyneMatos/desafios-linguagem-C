#include <stdio.h>
#define TAM 50
int main() {
    char s[TAM];

    printf("Digite uma string: ");
    scanf("%s", s);

    int i =0;

    for (i = 0; i < TAM;) {
        if (s[i] != '\0'){ 
            i++; 
        } else{
            break;
        }
    }

    printf("A string possui %d caractere.\n", i);

    return 0;
}
