#include <stdio.h>
int main(){
    int f,i;

    puts("Digite o fatorial: ");
    scanf("%d",&f);//4

    for(i = 1; f > 1; f--){
        i = i *f;
    }
        printf("%d",i);
}