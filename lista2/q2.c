#include <stdio.h>
int main(){
    int dia;

    while (dia){
    
    printf("Digite o dia da semana ou Digite 0 para sair: \n");
    scanf("%d",&dia); 

    switch (dia)
    {
    case 0:
        break;
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
    case 7:
        puts("Sabado");
        break;   
    default:
        puts("Dia Invalido.");
        break;
    }   
    
    }

    return 0;
}