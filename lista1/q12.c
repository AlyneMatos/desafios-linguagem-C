#include <stdio.h>
int main(){
    int x,y;

    printf("Digite o numero x: ");    
    scanf("%d",&x);
    printf("Digite o numero y: ");    
    scanf("%d",&y);

    printf("soma de x por y: %d\n",x+y);
    printf("multiplicacao de x por y: %d\n",x*y);
    printf("subtracao de x por y:  %d\n",x-y);
    printf("resto de x por y: %d\n",x%y);

    return 0;
}
