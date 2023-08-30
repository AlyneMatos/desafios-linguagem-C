#include <stdio.h>
int main(){
   float dolar, real;
   puts("Digite a cotacao do dolar: ");
   scanf("%f",&dolar);
   puts("Digite o valor em real: ");
   scanf("%f",&real);

   float conversao = real/dolar;
   printf("conversao real para dolar: %f", conversao);

   return 0;
}
