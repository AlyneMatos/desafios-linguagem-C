#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20
#define N 7
#define MIN 0
int main(){
    srand(time(NULL));

    int *vx;
    int *vy;
    int matriz[N*N] = {0};

    vx = (int*) malloc (sizeof (int) * TAM);
    vy = (int*) malloc (sizeof (int) * TAM);

    for(int i = 0; i < TAM; i++){
        *(vx+i) = MIN + rand()%N;
        *(vy+i) = MIN + rand()%N;
    }

    printf("vetor X = [");
    for(int i = 0; i < TAM; i++){
        printf("%d%s", vx[i], (i==TAM-1)?"]":", ");
    }
    
    printf("\nVetor Y = [");
    for(int i = 0; i < TAM; i++){
        printf("%d%s", vy[i], (i==TAM-1)?"]":", ");
    }
    
    for(int i = 0; i < TAM; i++){
        (*(matriz + vy[i] * N + vx[i]))++;
    }

    printf("\nocorrencias =");
    for(int i = 0; i < N*N; i++){
        if((i%N) == 0) printf("\n| ");
        printf(" %d ", *(matriz+i));
        if(((i+1)%N) == 0) printf("|");
    }
    
    return 0;
}