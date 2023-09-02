// Elabore um programa que apresente os quadrados dos n ́umeros inteiros m ́ultiplos de 4 existentes na
// faixa de valores de 15 a 90.
#include <stdio.h>
#include <math.h>
int main(){
    int n;

    for(n=15;n<90;n++){
        if(!(n%4)){
       int pot = pow(n,2);
            printf("%d, ",pot);
        }
    }
}