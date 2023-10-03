#include <stdio.h>
#include <string.h>
#define TAM 50
int main() {
    char s[TAM];
    char caractere;

    printf("Digite uma string: ");
    scanf("%s", s);

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    int encontrado = 0; 

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == caractere) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado) {
        printf("A string possui o caractere '%c'.\n", caractere);
    } else {
        printf("A string não possui o caractere '%c'.\n", caractere);
    }

    return 0;
}
