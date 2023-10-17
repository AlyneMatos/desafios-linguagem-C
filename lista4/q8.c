// Escreva um programa que busque um caractere fornecido em uma string utilizando ponteiros.
#include <stdio.h>
#define TAM 20
int main() {
    char string[TAM];
    char caractere;

    printf("Digite a string: ");
    scanf("\n%19[^\n]",string);

    printf("Digite o caractere: ");
    scanf("\n%c",&caractere);
 
    int i = 0;
    char *aux = string;
    while (*aux != caractere && *aux != '\0') {
      aux++;
      i++;
    }

    if(*aux != caractere) aux = NULL;

    if(aux != NULL){
      printf("%c na posição %d\n", *aux,i);
    }else{
      printf("caractere não encontrado");
    }
  
    return 0;
}