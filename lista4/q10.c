// Escreva um programa que gere um vetor X com n ́umeros pseudoaleat ́orios no intervalo [0,N − 1].
// Crie um vetor F com N posi ̧c ̃oes e armazene em cada posi ̧c ̃ao de F a quantidade de ocorrˆencias
// dos elementos de X. Exemplo:
// Para N = 7, temos:
// X = [4, 6, 2, 3, 2, 3, 0, 2, 5, 5, 2, 6, 0, 5]
// Portanto,
// F = [2, 0, 4, 2, 1, 3, 2]
// Observe que as ocorrˆencias dos elementos de X s ̃ao armazenadas em F nos  ́ındices de mesmo valor.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define N 5
#define MIN 0

int main() {
    int *x; 
    int *f; 
    srand(time(NULL));

    x = (int *) malloc (N * sizeof(int));
    f = (int *) calloc (N, sizeof(int));

    if(x == NULL || f == NULL) {
        printf("Falha na alocação de memória.\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        x[i] = MIN + rand() % N;
    }

    for (int i = 0; i < N; i++) {
        f[x[i]]++;
    }

    printf("X = [");
    for (int i = 0; i < N; i++) {
        printf("%d", x[i]);
        if (i < N - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    printf("F = [");
    for (int i = 0; i < N; i++) {
        printf("%d", f[i]);
        if (i < N - 1) {
            printf(", ");
        }
    }
    printf("]\n");
    free(x);
    free(f);

    return 0;
}
