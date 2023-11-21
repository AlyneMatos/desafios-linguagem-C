#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define INTERVALO 100

void ordenar(int *p, int tam) {
    for (int i = 0; i < tam - 1; i++) {
        for (int j = 0; j < tam - i - 1; j++) {
            if (*(p+j) > *(p+j+1)) {
                int aux = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = aux;
            }
        }
    }
}

float calcularMedia(int *p, int tam) {
    float soma = 0.0;

    for (int i = 0; i < tam; i++) {
        soma += *(p+i);
    }

    return soma / tam;
}

float calcularMediana(int *p, int tamanho) {
    if (tamanho % 2 == 0) {
        return (float)(*(p+tamanho) + *(p+(tamanho/2))) / 2;
    } else {
        return *(p+(tamanho/2));
    }
}

int calcularModa(int *p, int tam) {
    int moda = *(p+0);
    int contagemAtual = 1;
    int contagemMaxima = 1;

    for (int i = 1; i < tam; i++) {
        if (*(p+i) == *(p+i-1)) {
            contagemAtual++;
        } else {
            contagemAtual = 1;
        }

        if (contagemAtual > contagemMaxima) {
            contagemMaxima = contagemAtual;
            moda = *(p+i);
        }
    }

    return moda;
}

int main() {
    int *p = (int *)malloc(TAM * sizeof(int));

    if (p == NULL) {
        printf("Falha na alocação de memória\n");
        return 1;
    }

    srand(time(NULL));
    for (int i = 0; i < TAM; i++) {
        *(p+i) = rand() % INTERVALO; 
    }

    ordenar(p,TAM);

    printf("Vetor ordenado: ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", *(p+i));
    }
    printf("\n");


    float media = calcularMedia(p, TAM);
    printf("Média: %.2f\n", media);

    float mediana = calcularMediana(p, TAM);
    printf("Mediana: %.2f\n", mediana);

    int moda = calcularModa(p, TAM);
    printf("Moda: %d\n", moda);

    free(p);

    return 0;
}
