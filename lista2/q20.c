// Construir um programa que apresente como resultado o fatorial dos valores  ́ımpares situados na faixa
// n ́umero de 1 a 10.
#include <stdio.h>
int main(){
    

    for(int i=1;i<=10;i++){
        if(i%2){
            int fatorial = 1;
            printf("impar ");
            for(int j=1;j<=i;j++){
                fatorial *= j;
            }
            printf("%d! = %d\n", i, fatorial);       
        }
    }
}