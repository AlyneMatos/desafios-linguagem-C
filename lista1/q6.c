#include <stdio.h>
int main(){
   float altura, peso;
   char sexo;

   printf("Digite o sexo (f para feminino e m para masculino): ");
   scanf("%s",&sexo);

   printf("Digite a altura: ");
   scanf("%f",&altura);

   if(sexo == 'f'){
       peso = 62.1*altura-44.7;
       printf("%f",peso);
   }
   else {
       peso = 72.7*altura-58;
       printf("%f",peso);
   }
   return 0;

}
