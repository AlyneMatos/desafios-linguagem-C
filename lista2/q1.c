#include <stdio.h>
int main(){
    int dia;

    printf("Digite o dia da semana: ");
    scanf("%d",&dia);

    switch (dia)
    {
    case 1:
        puts("Domingo");
        break;
    case 2:
        puts("Segunda");
        break;
    case 3:
        puts("Terça");
        break;
    case 4:
        puts("Quarta");
        break;
    case 5:
        puts("Quinta");
        break;
    case 6:
        puts("Sexta");
        break;    
    default:
        puts("Dia Invalido.");
        break;
    }

    return 0;
}