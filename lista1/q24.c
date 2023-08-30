#include<stdio.h>
#include <math.h>
int main(){
  int num,n;

   printf("Digite um numero: ");
   scanf("%d",&num);
   printf("digite um valor n:");
   scanf("%d",&n);

   int a = (pow(num,2));
   int b = pow(a,n);
   printf("%d\n ",b);

   return 0;
}
