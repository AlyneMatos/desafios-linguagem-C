#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define TAM 3
#define INTERVALO 20
int main(){
    double somatorio = 0;
    double produto = 0;
    int num[TAM];

    srand(time(NULL));

    for(int i=0;i<TAM;i++){
        num[i] = rand() % INTERVALO;
        printf("vetor %d - %d\n",i,num[i]);
        somatorio += num[i]; 
        produto *= num[i];
    }

    double mediaA = (double)somatorio/TAM;
    double mediaG = pow(produto,1.0/TAM);

    printf("MEDIA ARITMETICA: %f\n",mediaA);
    printf("MEDIA GEOMETRICA: %f\n",mediaG);

    return 0;
}