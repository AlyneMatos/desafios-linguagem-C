#include <stdio.h>
int main(){
   int num;
   puts("Digite um numero: ");
   scanf("%d",&num);
  
   printf("Antecessor: %d ",num-1);
   printf("Sucessor: %d ",num+1);

   return 0;
}
