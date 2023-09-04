// Escreva um programa que apresente o somat ́orio de todos os n ́umeros divis ́ıveis por 3 pertencentes ao
// intervalo [0,100] e o somat ́orio de todos os n ́umeros divis ́ıveis por 5 pertencentes ao intervalo ]100,200].
// Obs.: Utilize apenas um la ̧co de repeti ̧c ̃ao.
#include <stdio.h>

int main() {
    int somaDivisiveisPor3 = 0;
    int somaDivisiveisPor5 = 0;

    for (int i = 0; i <= 100; i++) {
        if (i % 3 == 0) {
            somaDivisiveisPor3 += i;
        }
    }
    for (int i = 101; i <= 200; i++) {
        if (i % 5 == 0) {
            somaDivisiveisPor5 += i;
        }
    }

    printf("Somatorio de numeros divisiveis por 3 no intervalo [0, 100]: %d\n", somaDivisiveisPor3);
    printf("Somatorio de numeros divisiveis por 5 no intervalo (100, 200]: %d\n", somaDivisiveisPor5);

    return 0;
}