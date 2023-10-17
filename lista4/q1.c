// Escreva um programa que adicione dois n ́umeros usando ponteiros. Al ́em do valor da soma, imprima
// tamb ́em o endere ̧co de mem ́oria onde o valor resultante dessa soma est ́a armazenado.
#include <stdio.h>
int main() {
    int x, y, soma;
    int *p;

    printf("Digite o primeiro número: ");
    scanf("%d",&x);

    printf("Digite o segundo número: ");
    scanf("%d",&y);

    soma = x + y;
    p = &soma;

    printf("A soma é: %d\n", x, y, *p);
    printf("Endereço de memória da soma: %p\n", p);

    return 0;
}
