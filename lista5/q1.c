#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Uso: %s <valor1> <valor2> <codigo_operacao>\n", argv[0]);
        printf("   1 - Soma\n");
        printf("   2 - Multiplicação\n");
        return 1;
    }

    double valor1 = atof(argv[1]);
    double valor2 = atof(argv[2]);
    int codigoOperacao = atoi(argv[3]);

    double resultado;
    switch (codigoOperacao) {
        case 1:
            resultado = valor1 + valor2;
            printf("Soma: %.2f\n", resultado);
            break;
        case 2:
            resultado = valor1 * valor2;
            printf("Multiplicação: %.2f\n", resultado);
            break;
        default:
            printf("Operação inválida\n");
            return 1;
    }

    return 0;
}
