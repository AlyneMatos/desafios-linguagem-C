// Elaborar um programa que apresente os resultados das potˆencias do valor de base 3, elevado a um
// expoente que varie do valor 0 a 7.
#include <stdio.h>
#include <math.h>

int main() {
    int expoente;
    
    printf("Potencias de 3 elevado a um expoente de 0 a 7:\n");

    for (expoente = 0; expoente <= 7; expoente++) {
        double resultado = pow(3, expoente);
        printf("3^%d = %.0lf\n", expoente, resultado);
    }

    return 0;
}