#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float somar(float *p, int qtd) {
    float soma = 0.0;

    for (int i = 0; i < qtd; i++) {
        soma += *(p+i);
    }

    return soma;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <quantidadeElementos>\n", argv[0]);
        return 1;
    }

    int quantidadeElementos = atoi(argv[1]);

    float *p = (float *)malloc(quantidadeElementos * sizeof(float));

    if (p == NULL) {
        printf("Falha na alocação de memória\n");
        return 1;
    }

    srand(time(NULL));
    for (int i = 0; i < quantidadeElementos; i++) {
        *(p+i) = (float)rand() / RAND_MAX;  // Valores entre 0 e 1
    }

    printf("Vetor: ");
    for (int i = 0; i < quantidadeElementos; i++) {
        printf("%.2f ", *(p+i));
    }
    printf("\n");

    float resultado = somar(p, quantidadeElementos);

    printf("Soma: %.2f\n", resultado);

    free(p);

    return 0;
}
