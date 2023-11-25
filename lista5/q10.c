#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define MAX 5
#define MAX_ALE 10

void gerarVetor(int *p,int qtd){
    for (int i = 0; i < MAX_ALE; i++){
        *(p+i) = rand() % qtd;
    }
}

void imprimirVetor(int *p,int qtd){
    printf("[");
    for (int i = 0; i < MAX_ALE; i++){
        printf("%d,", *(p+i));
    }
    printf("]");
}

void verificarCoocorrencia(int m[N][N], int *px, int *py, int qtd){
    for (int i = 0; i < qtd; i++){
        int cont =0;
        int x = *(px+i); 
        int y = *(py+i); 
        for (int j = 0; j < qtd; j++){ 
            if ((x==(*(px+j+1))) && (y==(*(py+j+1)))){
                cont++;
                m[x][y] = cont;
            }else{
                m[x][y] = cont + 0;
            }
        }
    }
}

void imprimirMatriz(int matriz[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){

    int *x, *y;

    srand(time(NULL));

    x = (int*) malloc(N * sizeof(int*));
    gerarVetor(x,MAX);
    printf("\nVetor X: ");
    imprimirVetor(x,MAX);

    y = (int*) malloc(N * sizeof(int*));
    gerarVetor(y,MAX);
    printf("\nVetor Y: ");
    imprimirVetor(y,MAX);

    int matriz[N][N] = {0};
    verificarCoocorrencia(matriz,x,y,MAX_ALE);

    printf("\n\n");
    imprimirMatriz(matriz);


    free(x);
    free(y);
    return 0;
}