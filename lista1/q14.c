#include <stdio.h>
int main(){
   float c,f;

   printf("Temperatura em Celsius: ");   
   scanf("%f",&c);

   f = (9*c + 160)/5;
   printf("Temperatura em Fahrenheit: %1.f",f);
   
   return 0;
}
