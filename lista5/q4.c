#include <stdio.h>

void normalizarMinMax(int vetor[], int tamanho) {
    int minValor = vetor[0];
    int maxValor = vetor[0];

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] < minValor) {
            minValor = vetor[i];
        }
        if (vetor[i] > maxValor) {
            maxValor = vetor[i];
        }
    }

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = (vetor[i] - minValor) / (float)(maxValor - minValor);
    }
}

int main() {
    int vetorOriginal[] = {1, 5, 2, 8, 3};
    int tamanho = sizeof(vetorOriginal) / sizeof(vetorOriginal[0]);

    normalizarMinMax(vetorOriginal, tamanho);

    printf("Vetor normalizado: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%f ", (float)vetorOriginal[i]);
    }

    return 0;
}
