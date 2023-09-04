// Elaborar um programa que apresente a m ́edia aritm ́etica dos n ́umeros inteiros existentes entre uma
// faixa especificada pelo usu ́ario.
#include <stdio.h>
int main(){
    int num1, num2,cont=0;
    double soma=0;

    printf("Numero 1: \n");
    scanf("%d",&num1);
    printf("Numero 2: \n");
    scanf("%d",&num2);

  for(int i = num1; i <= num2; i++){
    soma += i;
    cont++;
  }
  printf("%f",soma/cont);
  return 0;
}