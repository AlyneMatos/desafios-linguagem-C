#include <stdio.h>
int main(){
   float x;

   x = 7 + 3*6/2-1; // ordem de precedencia * , / , + e -.
   printf("%f\n",x);

   x = 2%2 + 2*2-2/2; // ordem de precedencia * , / , % , + e -.
   printf("%f\n",x);

   x = (3*9*(3+(9*3/(3))));  // ordem de precedencia (), * , / , + e -.
   printf("%f\n",x);
   
   return 0;
}
