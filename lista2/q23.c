// Escreva um programa que mostre a diferen ̧ca entre pr ́e-incrementar e p ́os-incrementar usando o ope-
// rador –.
#include <stdio.h>

int main() {
    int numero = 5;

    printf("Pre-incremento:\n");
    printf("Antes: numero = %d\n", numero);
    int resultadoPreIncremento = ++numero;
    printf("Depois: numero = %d, resultado = %d\n\n", numero, resultadoPreIncremento);

    numero = 5; 

    printf("Pos-incremento:\n");
    printf("Antes: numero = %d\n", numero);
    int resultadoPosIncremento = numero++;
    printf("Depois: numero = %d, resultado = %d\n", numero, resultadoPosIncremento);

    return 0;
}
