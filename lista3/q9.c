#include <stdio.h>
#define TAM 3
int main() {
    int matriz[TAM][TAM];

    printf("Digite os elementos da matriz 3x3:\n");

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Elementos da diagonal principal:\n");

    for (int i = 0; i < TAM; i++) {
        printf("%d ", matriz[i][i]);
    }

    printf("\n");

    return 0;
}
