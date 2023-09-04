// Escreva um programa que receba dois valores num ́ericos X e Y (unsigned char ) e esconda todos os bits
// de X em cada um dos bits menos significativos dos 4 elementos imediatamente anteriores e posteriores
// a Y. (Obs.: N ̃ao utilizar valores para Y menores que 5).
#include <stdio.h>

int main() {
    unsigned char X, Y;

    printf("Digite o valor de X (0 a 255): ");
    scanf("%hhu", &X);

    printf("Digite o valor de Y (5 a 250): ");
    scanf("%hhu", &Y);

    if (Y < 5 || Y > 250) {
        printf("Valor de Y fora do intervalo permitido (5 a 250).\n");
        return 1;
    }

    for (int i = Y - 4; i <= Y + 4; i++) {
        if (i >= 0 && i <= 255) {
            unsigned char mask = 1 << (i - (Y - 4)); 
            X &= ~mask; 
        }
    }

    printf("O valor de X com bits escondidos em relação a Y é: %hhu\n", X);

    return 0;
}
