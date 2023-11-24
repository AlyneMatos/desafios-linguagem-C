#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3

void matriz(int **m, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            m[i][j] = rand() % 10; 
        }
    }
}

void imprimirMatriz(int **m, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (i == j) {
                printf("\033[1;31m%d \033[0m", m[i][j]);
            } else {
                printf("%d ", m[i][j]);
            }
        }
        printf("\n");
    }
}

int somatorioDiagonal(int **m, int tamanho) {
    int somatorio = 0;
    for (int i = 0; i < tamanho; i++) {
        somatorio += m[i][i];
    }
    return somatorio;
}

int main() {

    int **m = (int **)malloc(TAM * sizeof(int *));
    for (int i = 0; i < TAM; i++) {
        *(m+i) = (int *)malloc(TAM * sizeof(int));
    }

    if (m == NULL) {
        printf("falha na alocação de memoria\n");
        return 1;
    }

    srand(time(NULL));

    matriz(m, TAM);

    printf("Matriz:\n");
    imprimirMatriz(m, TAM);

    int diagonal = somatorioDiagonal(m, TAM);

    if (diagonal % 2 == 0) {
        printf("somatório da diagonal é par.\n");
    } else {
        printf("somatório da diagonal é impar.\n");
    }

    for (int i = 0; i < TAM; i++) {
        free(*(m+i));
    }
    free(m);

    return 0;
}
