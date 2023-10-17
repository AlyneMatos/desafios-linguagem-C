#include <stdio.h>
#include <stdbool.h>
int main() {
    int numero, menor;
    int *ptr_menor = &menor; 
    bool primeiro_numero = true;

    printf("Digite um número (ou 0 para sair): ");
    scanf("%d", &numero); 
        
    while (numero != 0) {
        if (primeiro_numero || numero < *ptr_menor) {
            *ptr_menor = numero; 
            primeiro_numero = false; 
        }
        printf("Menor valor: %d\n", *ptr_menor);

        printf("Digite um número (ou 0 para sair): ");
        scanf("%d", &numero); 
    }

    printf("O menor valor fornecido foi: %d\n", *ptr_menor);

    return 0;
}

