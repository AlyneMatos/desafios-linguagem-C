#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 3
int main() {
    int matriz[TAM][TAM];
    int x, contador = 0;

    srand(time(NULL));

    printf("Digite um valor inteiro: ");
    scanf("%d", &x);

    printf("Matriz gerada:\n");

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            matriz[i][j] = rand() % 10; 
            printf("%d ", matriz[i][j]);
            if (matriz[i][j] == x) {
                contador++;
            }
        }
        printf("\n");
    }

    printf("O valor %d aparece %d vezes na matriz.\n", x, contador);

    return 0;
}
