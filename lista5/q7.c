#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define TAM 10
#define INT 100

void gerarVetorAleatorio(int *v, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        *(v+i) = rand() % INT; 
    }
}

float calcular(int *a, int *b, int tamanho) {
    float soma = 0;

    for (int i = 0; i < tamanho; i++) {
        soma += pow(*(a+i) - *(b+i), 2);
    }

    return sqrt(soma / tamanho);
}

int main() {

    int *pA = (int *) malloc(TAM * sizeof(int));
    int *pB = (int *) malloc(TAM * sizeof(int));

    if (pA == NULL || pB == NULL) {
        printf("Falha na alocação de memória\n");
        return 1;
    }
    srand(time(NULL));

    gerarVetorAleatorio(pA, TAM);
    gerarVetorAleatorio(pB, TAM);

    printf("Vetor A: ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", *(pA+i));
    }

    printf("Vetor B: ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", *(pB+i));
    }

    float emq = calcular(pA, pB, TAM);
    printf("Erro Médio Quadrático: %.2f\n", emq);

    free(pA);
    free(pB);

    return 0;
}
