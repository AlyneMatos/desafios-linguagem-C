#include <stdio.h>
int main(){
   int hora, minutos, segundos;

   printf("hora: ");
   scanf("%d",&hora);
   printf("minutos: ");
   scanf("%d",&minutos);
   printf("segundos: ");
   scanf("%d",&segundos);

   int tempoSegundo = hora*3600 + minutos*60 + segundos;
   printf("%d",tempoSegundo);
   
   return 0;
}
