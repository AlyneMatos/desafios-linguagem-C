#include <stdio.h>
int main(){
   float comprimento, largura, altura;

   printf("Digite o comprimento da caixa: ");   
   scanf("%f",&comprimento);
   printf("Digite o largura da caixa: ");   
   scanf("%f",&largura);
   printf("Digite o altura da caixa: ");   
   scanf("%f",&altura);

   float volume = comprimento* largura*altura;
   printf("%f",volume);

   return 0;
}
