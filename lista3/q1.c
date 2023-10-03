// Fa ̧ca um programa em C que leia um vetor do tipo float com 15 elementos e apresente a soma do
// menor e maior elemento do vetor fornecido.
#include <stdio.h>
#define QTD 15
int main(){
    float v[QTD];

    for(int i=0;i<QTD;i++){
        printf("\nDigite o v[%d]: ",i);
        scanf("%f",&v[i]);
    }

    float menor = v[0];
    float maior = v[0];

    for (int i = 0; i < QTD; i++) {
        if (v[i] < menor) {
            menor = v[i];
        }
        if (v[i] > maior) {
            maior = v[i];
        }
    }

    float soma = menor + maior;
    printf("A soma do menor e do maior elemento do vetor é: %.2f\n", soma);

    return 0;
}