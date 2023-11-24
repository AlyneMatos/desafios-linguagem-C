#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM_VETOR 5

struct Media {
    int *vetor;
    int quantidade;
    double media;
};

void gerarVetor(int **vetor, int tamanho) {
    *vetor = (int *) malloc(tamanho * sizeof(int));
    for (int i = 0; i < tamanho; i++) {
        *(*(vetor)+i) = rand() % 100; 
    }
}

float calcularMedia(int *vetor, int tamanho) {
    float soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += *(vetor+i);
    }
    return soma / tamanho;
}

int main() {
    srand(time(NULL));

    struct Media media;

    gerarVetor(&(media.vetor), TAM_VETOR);

    media.quantidade = TAM_VETOR;
    media.media = calcularMedia(media.vetor, TAM_VETOR);

    printf("Vetor: ");
    for (int i = 0; i < TAM_VETOR; i++) {
        printf("%d ", media.vetor[i]);
    }
    printf("\n");

    printf("Média: %.2f\n", media.media);

    free(media.vetor);

    return 0;
}
