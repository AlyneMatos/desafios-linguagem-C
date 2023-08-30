#include <stdio.h>
#define valor 50.25
int main(void) {

  int dias;
  float pagamento;
 
  printf("Dias Trabalhado\n");
  scanf("%d",&dias);

  if (dias <= 10){
	pagamento = valor*dias;
  }else if (dias >= 10 && dias <= 20){
	pagamento = (valor*dias)*(1+0.2);
  }else{
	pagamento =  (valor*dias)*(1+0.3);
  }

  float vliquido= pagamento * (1-0.1);

  printf("valor liquido %f",vliquido);
  return 0;
}
