#include <stdio.h>

int main() {
    int numero, contador = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    while (numero > 0) {
        int digito = numero % 10;
        if (digito == 7) {
            contador++;
        }
        numero /= 10;
    }

    printf("O numero de digitos 7 no inteiro e: %d\n", contador);

    return 0;
}
