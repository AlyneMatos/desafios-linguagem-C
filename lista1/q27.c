#include <stdio.h>
#include <math.h>
int main(){
   float a,b,c;

   puts("Digite o numero a: ");
   scanf("%f",&a);
   puts("Digite o numero b: ");
   scanf("%f",&b);
   puts("Digite o numero c: ");
   scanf("%f",&c);
  
   float mediaArt = (a+b+c)/3;
   float mediaGeo = pow((a*b*c),1/3);
   printf("media aritmetica=%f \n media geometrica=%f",mediaArt,mediaGeo);

   return 0;
}
