#include <stdio.h>
#define TAM 100
int main() {
    char s1[TAM], s2[TAM];
    int i, j;

    printf("Digite a primeira string: ");
    scanf("%s", s1);

    printf("Digite a segunda string: ");
    scanf("%s", s2);

    for (i = 0; s1[i] != '\0'; i++) {}

    for (j = 0; s2[j] != '\0'; j++) {
        s1[i + j] = s2[j];
    }

    printf("A string concatenada é: %s\n", s1);

    strcat(s1, s2);
    
    printf("A string concatenada é: %s\n", s1);

    return 0;
}
