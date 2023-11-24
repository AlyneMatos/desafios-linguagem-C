#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void binarizarMatriz(int **matriz, int linhas, int colunas, int limiar) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = (matriz[i][j] > limiar) ? 1 : 0;
        }
    }
}

void imprimirMatriz(int **matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int linhas, colunas, limiar;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);

    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    int **matriz = (int **)malloc(linhas * sizeof(int *));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
    }

    srand(time(NULL));
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = rand() % 100;  
        }
    }

    printf("Digite o limiar para binarizar a matriz: ");
    scanf("%d", &limiar);

    binarizarMatriz(matriz, linhas, colunas, limiar);

    printf("Matriz binarizada:\n");
    imprimirMatriz(matriz, linhas, colunas);

    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
