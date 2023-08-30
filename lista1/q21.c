#include<stdio.h>
int main(){
   int x,y;

   printf("Digite o numero x: ");
   scanf("%d",&x);
   printf("Digite o numero y: ");
   scanf("%d",&y);

   int resto = x%y;

   switch (resto)
   {
       case 0 :
           printf("é multiplo\n");
           break;
       default:
           printf("nao é multiplo\n");
           break;
   }
   return 0;
}
