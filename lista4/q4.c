// Escreva um programa que leia um vetor do usu ́ario e imprima seus valores e seus endere ̧cos. Teste
// o vetor com tipos de dados diferentes, analise os endere ̧cos. O que vocˆe observou?
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5
#define INI 0
int main() {
    int *v = NULL;

    srand(time(NULL));

    v = malloc(TAM * sizeof(int));

    // Verifica se a alocação de memória foi bem-sucedida
    if (v == NULL) {
        printf("Falha na alocação de memória\n");
        return 1;
    }

    for(int i =0; i<TAM; i++){
      *(v+i) = INI + rand() % 100;
    }

    for(int i =0; i<TAM; i++){
      printf("[%p] -%d - %d\n", (v+i),*(v+i),v[i]);
    }

    free(v);
    return 0;
}