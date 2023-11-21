// Escreva um programa em C que informe o endere ̧co do menor elemento de um vetor de inteiros
// gerado. A quantidade de elementos desse array deve ser fornecido por linha de comando.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INTERVALO 100

int main(int argc, char *argv[]){
    if (argc != 2) {
        printf("Uso: %s <quantidadeElementos> \n", argv[0]);
        return 1;
    }

    int quantidadeElementos = atof(argv[1]);

    int *p = (int *)malloc(quantidadeElementos * sizeof(int));

    if (p == NULL) {
        printf("Falha na alocação de memória\n");
        return 1;
    }
       
    srand(time(NULL));

    for (int i = 0; i < quantidadeElementos; i++){
        *(p+i) = rand() % INTERVALO;
    }

    for (int i = 0; i < quantidadeElementos; i++) {
        printf("%d ", p[i]);
    }

    int menor = *(p+0);
    int *enderecoMenor = (p+0);
    for (int i = 0; i < quantidadeElementos; i++){
        if(menor > *(p+i)){
            menor = *(p+i);
            enderecoMenor = (p+i);
        }
    }

    printf("Endereço do menor: %d - %p\n",menor,enderecoMenor);

    free(p);
    return 0;
}