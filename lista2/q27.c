// Escreva um programa que receba v ́arios n ́umeros inteiros (em uma estrutura de la ̧co) e apresente o
// produto do maior pelo menor n ́umero apresentado. (Obs.: N ̃ao utilize vetores.) A condi ̧c ̃ao de sa ́ıda
// do la ̧co  ́e o usu ́ario digitar um n ́umero negativo e par.
#include <stdio.h>
#include <stdbool.h>

int main() {
    int numero, maior = 0, menor = 0;
    bool primeiro = true;

    printf("Digite números inteiros (para encerrar, digite um número negativo e par):\n");

    while (1) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero < 0 && numero % 2 == 0) {
            break; 
        }

        if (primeiro) {
            maior = menor = numero;
            primeiro = false;
        } else {
            if (numero > maior) {
                maior = numero;
            }
            if (numero < menor) {
                menor = numero;
            }
        }
    }

    if (!primeiro) {
        int produto = maior * menor;
        printf("O produto do maior (%d) pelo menor (%d) número apresentado é: %d\n", maior, menor, produto);
    } else {
        printf("Nenhum número foi inserido.\n");
    }

    return 0;
}
