// Escrever um programa que calcule e apresente o somat ́orio do n ́umero de gr ̃aos de trigo que se pode
// obter num tabuleiro de xadrez, obedecendo `a seguinte regra: colocar um gr ̃ao de trigo no primeiro
// quadro e nos quadros seguintes o dobro do quadro anterior. Ou seja, no primeiro quadro coloca-se um
// gr ̃ao, no segundo quadro colocam-se dois gr ̃aos (tendo neste momento trˆes gr ̃aos), no terceiro quadro
// colocam-se quatro gr ̃aos (tendo neste momento sete gr ̃aos), no quarto quadro colocam-se oito gr ̃aos
// (tendo-se ent ̃ao quinze gr ̃aos) at ́e atingir o sexag ́esimo quarto quadro.
#include <stdio.h>

int main() {
    int quadrado;
    unsigned long long total_graos = 0; // Usando "unsigned long long" para acomodar números grandes

    printf("Calculo do somatorio de graos de trigo em um tabuleiro de xadrez:\n");

    for (quadrado = 1; quadrado <= 64; quadrado++) {
        unsigned long long graos_quadrado = 1ULL << (quadrado - 1);
        total_graos += graos_quadrado;
        printf("Quadrado %2d: %20llu graos\n", quadrado, graos_quadrado);
    }

    printf("Total de graos no tabuleiro de xadrez: %llu graos\n", total_graos);

    return 0;
}
