#include <stdio.h>
int main(){
  int num1, num2,maior,menor;

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
    if(!(i%4)){
      printf("%d\n",i);
    }
  }
  return 0;
}