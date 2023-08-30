#include <stdio.h>
#include <math.h>
int main(){
   int segundos, horas, minutos;

   printf("digite o tempo em segundos: ");
   scanf("%d",&segundos); 

   horas = segundos/3600;
   minutos = segundos/60;
   printf("horas: %d, minutos: %d e segundos: %d",horas,minutos,segundos);

   return 0;
}
