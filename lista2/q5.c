// Fazer um programa que receba um valor n no teclado e determine o maior e o menor termo fornecido.
// A condi ̧c ̃ao de termino do programa  ́e quando o usu ́ario digitar zero.
#include <stdio.h>
int main(){
    int n,maior,menor;

        printf("Valor de n: ");
        scanf("%d",&n);
        maior = n;
    while (1){
        
        if(n==0){
            printf("Encerrando...");
            break;
        }
        else if(n > maior){
            maior = n;
            printf("maior %d\n",n);        
        }else if(n < maior){
            printf("maior %d\n",maior);
        }
        else printf("maior %d\n",maior);

        printf("Valor de n: ");
        scanf("%d",&n);

    }
    
}