// Para que a divisão entre 2 números possa ser realizada, o divisor não pode ser nulo (zero). Escreva
// um programa para ler 2 valores e imprimir o resultado da divisão do primeiro pelo segundo. OBS: O
// programa deve validar a leitura do segundo valor (que não deve ser nulo). Enquanto for fornecido um
// valor nulo a leitura deve ser repetida.
#include <stdio.h>
int main(){
    float x,y,div;

    while(1){
        printf("Valor de x:\n");
        scanf("%f",&x);
        printf("Valor de y:\n");
        scanf("%f",&y);

        div = x/y;

        if(y!=0) {
            printf("%f\n",div); 
            break;
        }else {
            printf("O segundo valor não pode ser zero.\n");
        }
    }

    return 0;
}