#include <stdio.h>
int main(){
  int a,b, aux;

  printf("Valor de a: ");
  scanf("%d",&a);
  printf("Valor de b: ");
  scanf("%d",&b);

  aux = a;
  a = b;
  b =aux;
  printf("Valor de a = %d e valor de b = %d.",a,b);
  
  return 0;
}
