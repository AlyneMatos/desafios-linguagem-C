// Fa ̧ca um programa em C que gere um vetor com 100 n ́umeros inteiros pseudoaleat ́orios no intervalo
// definido pelo usu ́ario e apresente esse vetor ordenado (crescente). Fa ̧ca uma vers ̃ao com o m ́etodo
// de ordena ̧c ̃ao por sele ̧c ̃ao e outra pelo m ́etodo bolha (bubble sort).
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

int main() {
    int vetor[TAM];
    int *a,*b,aux;

    srand(time(NULL));

    for (int i = 0; i < TAM; i++) {
        vetor[i] = rand() % TAM;
        printf("%d ", vetor[i]);
    }

    printf("\nVetor ordenado (método de seleção):\n");

    for (int i = 0; i < TAM - 1; i++) {
        int m = i;
        for (int j = i + 1; j < TAM; j++) {
            if (vetor[j] < vetor[m]) {
                m = j;
            }
        }

        a =  &vetor[i];
        b =  &vetor[m];

        aux = *a;
        *a = *b;
        *b = aux;
    }

    for (int i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }

    for (int i = 0; i < TAM; i++) {
        vetor[i] = rand() % TAM; 
    }
    
    printf("\nVetor ordenado (método bolha):\n");

    for (int i = 0; i < TAM - 1; i++) {
        for (int j = 0; j < TAM - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {

                a =  &vetor[j];
                b =  &vetor[j + 1];

                aux = *a;
                *a = *b;
                *b = aux;
            }
        }
    }

    for (int i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}
