#include <stdio.h>
#include <string.h>
#define TAM 100
int main() {
    char s[TAM];

    printf("Digite uma string: ");
    scanf("%s", s);

    int comprimento = strlen(s);

    printf("A string na forma inversa é: ");

    for (int i = comprimento - 1; i >= 0; i--) {
        printf("%c", s[i]);
    }
    
    return 0;
}
