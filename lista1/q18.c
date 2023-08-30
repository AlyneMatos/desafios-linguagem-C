#include <stdio.h>
int main(){
   float raio, circulo,diametro,area,pi;
   pi = 3.14159;
  
   printf("Digite o raio: ");
   scanf("%f",&raio);

   diametro = 2*raio;
   circulo = 2*raio*pi;
   area = raio*raio*pi;

   printf("Diametro = %f \n Circunferencia = %f \n Area = %f \n",diametro,circulo,area);

   return 0;
}
