#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 7

void gerarVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % N;  
    }
}

void criarMatrizCoocorrencias(int matriz[N][N], int vetorX[], int vetorY[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        int indiceX = vetorX[i];
        int indiceY = vetorY[i];
        matriz[indiceX][indiceY]++;
    }
}

void imprimirMatriz(int matriz[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int vetorX[N], vetorY[N];
    int matrizCoocorrencias[N][N] = {0};

    srand(time(NULL));

    gerarVetor(vetorX, N);
    gerarVetor(vetorY, N);

    criarMatrizCoocorrencias(matrizCoocorrencias, vetorX, vetorY, N);

    printf("Vetor X: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", vetorX[i]);
    }
    printf("\n");

    printf("Vetor Y: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", vetorY[i]);
    }
    printf("\n");

    printf("Matriz de coocorrências:\n");
    imprimirMatriz(matrizCoocorrencias);

    return 0;
}
