#include <stdio.h>
int main(){
    int primeiroTermo = 0;
    int segundoTermo = 1;
    int proximoTermo;
    
    for(int i=0;i<20;i++){
        proximoTermo = primeiroTermo+segundoTermo;
        
        printf("%d\n",proximoTermo);

        segundoTermo = primeiroTermo;
        primeiroTermo = proximoTermo;
    }
}