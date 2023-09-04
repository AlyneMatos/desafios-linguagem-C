// Elabore um programa que calcule o somat ́orio de todos os n ́umeros pares pertencentes a faixa A,B
// especificada pelo usu ́ario. O programa deve funcionar tanto para A > B quanto para B > A.
#include <stdio.h>
int main(){
  int num1, num2,maior,menor,soma;

  printf("Numero 1: \n");
  scanf("%d",&num1);
  printf("Numero 2: \n");
  scanf("%d",&num2);

  if(num1>num2){
    maior = num1;
    menor = num2;
  }else{
    maior = num2;
    menor = num1;
  }

  for(int i = menor; i <= maior; i++){
    if(!(i%2)){
      soma += i;
      printf("%d\n",i);
    }
  }
  printf("Somatorio: %d\n",soma);
  return 0;
}