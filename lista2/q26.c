// Escreva um programa que imprima uma tabela dos equivalentes bin ́ario, octal e hexadecimal dos
// n ́umeros decimais no intervalo de 1 a 256.
#include <stdio.h>

int main() {
    printf("Decimal\t\tBinario\t\tOctal\t\tHexadecimal\n");

    for (int decimal = 1; decimal <= 256; decimal++) {
        printf("%d\t\t", decimal);

        int temp = decimal;
        for (int i = 7; i >= 0; i--) {
            int bit = (temp >> i) & 1;
            printf("%d", bit);
        }
        printf("  \t");

        printf("%o\t\t", decimal);

        printf("%X\n", decimal);
    }

    return 0;
}
