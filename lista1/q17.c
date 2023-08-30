#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int num;
  
  printf("Entre com o valor inteiro: \n");
  scanf("%d",&num);

  int modulo = abs(num);

  printf("%d", modulo);
  return 0;
}
