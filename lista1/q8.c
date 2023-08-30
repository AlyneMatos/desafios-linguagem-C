#include <stdio.h>
#include <math.h>
int main(){
   int num;
   puts("Digite um numero: ");
   scanf("%d",&num);
  
   int potencia = pow(num,2);
   printf("%d\n",potencia);

   return 0;
}
