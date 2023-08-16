#include <stdio.h>
int main(){
   float pagamento;

   scanf("%f",&pagamento);

   printf("Conta restaurante sem taxa: %.2f\n",pagamento);
   
   float valorTaxado = pagamento + (pagamento*0.1);
   printf("Conta restaurante com taxa: %.2f\n",valorTaxado);
 
   return 0;
}
