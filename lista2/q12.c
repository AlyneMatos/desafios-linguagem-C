// Elaborar um programa que mostre os resultados da tabuada de um n ́umero inteiro qualquer, a qual
// deve ser apresentada de acordo com sua forma tradicional.
#include <stdio.h>
int main(){
  int tabuada;

  printf("Qual Tabuada? \n");
  scanf("%d",&tabuada);
  
 
  for (int i = 0; i < 10; i++){
    printf("%d + %d = %d\n",tabuada,i,(tabuada+i));
  }
  for (int i = 0; i < 10; i++){
    printf("%d - %d = %d\n",tabuada,i,(tabuada-i));
  }
  for (int i = 0; i < 10; i++){
    printf("%d * %d = %d\n",tabuada,i,(tabuada*i));
  }

  return 0;
}