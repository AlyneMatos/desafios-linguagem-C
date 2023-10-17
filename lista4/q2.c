// Escreva um programa que troque o valor de dois n ́umeros utilizando ponteiros.
#include <stdio.h>
int main() {
    int x = 1, y = 2, aux;
    int *px,*py;

    px = &x;
    py = &y;

    aux = *px;
    *px = *py;
    *py = aux;

    printf("%d %d \n",*px,*py);
    return 0;
}
