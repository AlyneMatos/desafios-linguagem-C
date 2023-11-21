#include <stdio.h>
#include <stdlib.h>

#define INTERVALO 100

void encontrarEnderecos(int *vetor, int quantidadeElementos, int **menor, int **maior) {
    *menor = &vetor[0];
    *maior = &vetor[0];

    for (int i = 1; i < quantidadeElementos; i++) {
        if (vetor[i] < **menor) {
            *menor = &vetor[i];
        } else if (vetor[i] > **maior) {
            *maior = &vetor[i];
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <quantidade_elementos>\n", argv[0]);
        return 1;
    }

    int quantidadeElementos = atoi(argv[1]);

    int *p = (int *)malloc(quantidadeElementos * sizeof(int));

    if (p == NULL) {
        printf("Falha na alocação de memória\n");
        return 1;
    }

    for (int i = 0; i < quantidadeElementos; i++) {
        *(p+i) = rand() % INTERVALO;
    }

    int *menor, *maior;

    encontrarEnderecos(p, quantidadeElementos, &menor, &maior);

    printf("Vetor: ");
    for (int i = 0; i < quantidadeElementos; i++) {
        printf("%d - %p\n", *(p+i),(p+i));
    }
    printf("\n");

    printf("Endereço do menor elemento: %p - %d\n", menor,*menor);
    printf("Endereço do maior elemento: %p - %d\n", maior,*maior);

    free(p);

    return 0;
}
