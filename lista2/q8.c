// Uma loja vende seus produtos no sistema entrada mais duas presta ̧c ̃oes, sendo a entrada maior do que
// ou igual `as duas presta ̧c ̃oes; estas devem ser iguais, inteiras e as maiores poss ́ıveis. Por exemplo, se o
// valor da mercadoria for R$ 270,00, a entrada e as duas presta ̧c ̃oes s ̃ao iguais a R$ 90,00; se o valor da
// mercadoria for R$ 302,75, a entrada  ́e de R$ 102,75 e as duas presta ̧c ̃oes s ̃ao iguais a R$ 100,00. Escreva
// um programa que receba o valor da mercadoria e forne ̧ca o valor da entrada e das duas presta ̧c ̃oes, de
// acordo com as regras acima.
#include <stdio.h>
int main(){
    float valor ,entrada;
    int  prestacao;

    printf("Valor da mercadoria: \n");
    scanf("%f",&valor);

    entrada = valor/3;
    prestacao = ((valor  - entrada)/2)+0.5;

    printf("Entrada: %f\n",entrada);
    printf("Prestaçoes: %d*2\n",prestacao);
    
}