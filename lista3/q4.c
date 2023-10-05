#include <stdio.h>
#include <string.h>
#define TAM 50
int main() {
    char s1[TAM], s2[TAM];

    printf("Digite a string 1: ");
    scanf("%s", s1);

    printf("Digite a string 2: ");
    scanf("%s", s2);

    int estado = 1;
    for (int i=0;  s1[i] != '\0' || s2[i] != '\0'; i++) {
        if (s1[i] != s2[i]){ 
           estado = 0;
            break;
        }
    }

    if (estado) {
        printf("As strings são iguais.\n");
    } else {
        printf("As strings são diferentes.\n");
    }

    if (strcmp(s1, s2) == 0) {
        printf("As strings são iguais.\n");
    } else {
        printf("As strings são diferentes.\n");
    }

    return 0;
}
