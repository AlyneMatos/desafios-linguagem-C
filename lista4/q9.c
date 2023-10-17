// Implemente o m ́etodo de ordena ̧c ̃ao bolha utilizando ponteiros.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MIN 0
#define QTD 100

int main(){
    int *x;

    srand(time(NULL));

    x = malloc(TAM * sizeof(int));

    if (!x){
        puts("Não há memória disponível. ");
        exit(1);
    }

    for (int k=0; k<TAM; k++){
        *(x+k) = MIN + (rand() % QTD);
    }

    puts("Vetor gerado antes da ordenação: ");
    for (int k=0; k<TAM; k++){
        printf(" %d\n", *(x+k));
    }

    for (int k=0; k<TAM; k++){
        for (int j=0; j<TAM-1; j++){
            if (*(x+j) > *(x+j+1)){
                *(x+j) = *(x+j) ^ *(x+j+1);
                *(x+j+1) = *(x+j) ^ *(x+j+1);
                *(x+j) = *(x+j) ^ *(x+j+1);
            }
        }
    }

    puts("Vetor gerado DEPOIS da ordenação: ");
    for (int k=0; k<TAM; k++){
         printf(" %d\n", *(x+k));
    }

    return 0;

}
