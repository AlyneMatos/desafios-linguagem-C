#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 15
#define N 7
#define MIN 0
int main(){
    srand(time(NULL));

    int *vx;
    int *vy;
    int matriz[N][N];

    for(int i = 0; i < TAM; i++){
        *(vx+i) = MIN + rand()%N;
        *(vy+i) = MIN + rand()%N;
    }

    printf("vetor X = [");
    for(int i = 0; i < TAM; i++){
        printf("%d%s", vx[i], (i==TAM-1)?"]":", ");
    }

    printf("Vetor Y = [");
    for(int i = 0; i < TAM; i++){
        printf("%d%s", vy[i], (i==TAM-1)?"]":", ");
    }
    
    for(int i = 0; i < TAM; i++){
        (*(matriz[0] + vy[i] * N + vx[i]))++;
    }

    printf("ocorrencias = ");
    for(int i = 0; i < N*N; i++){
        if((i%N) == 0) printf("\n| ");
        printf("%d", *(matriz+i));
        if(((i+1)%N) == 0) printf("|");
    }
    
    return 0;
}