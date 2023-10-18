#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define N 7
#define MIN 0
int main(){
    srand(time(NULL));

    int *vx;
    int *vy;

    vx = (int*) malloc (sizeof (int) * TAM);
    vy = (int*) malloc (sizeof (int) * TAM);

    for(int i = 0; i < TAM; i++){
        *(vx+i) = MIN + rand()%N;
    }

    printf("Vetor X = [");
    for(int i = 0; i < TAM; i++){
        printf("%d%s", vx[i], (i==TAM-1)?"]":", ");
    }

    for(int i = 0; i < TAM; i++){
        int r = MIN + rand() % TAM; 
        int d = 0;

        if (r<=3) d = 0;
        else if (r<=5) d = -1;
        else if(r<=7) d = +1;
        else if (r<=9) d = -2;
        else d = +2;

        *(vy+i) = *(vx+i) + d;

        if(*(vy+i) >= N) *(vy+i) = N-1;
        if(*(vy+i) < 0) *(vy+i) = 0;

    }

    printf("\nVetor X = [");
    for(int i = 0; i < TAM; i++){
        printf("%d%s", vy[i], (i==TAM-1)?"]":", ");
    }

    printf("\n");
    return 0;
}