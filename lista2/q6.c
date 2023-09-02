// Escreva um programa que transforme o computador numa urna eletrônica para eleição para presidente
// de um certo paı́s, às quais concorrem os candidatos 5-Paulo e 7-Renata. Cada voto deve ser dado pelo
// número do candidato, permitindo-se ainda o voto 0 para voto em branco. Qualquer voto diferente dos
// já citados é considerado nulo; em qualquer situação, o eleitor deve ser consultado quanto à confirmação
// do seu voto. No final da eleição o programa deve emitir um relatório contendo as porcentagens de
// votação de cada candidato, votos em branco, votos nulos e o candidato eleito. Obs.: O código para
// finalizar a urna (votação) é o usuário digitar algum número negativo.

#include <stdio.h>
int main(){
    int voto=0;
    int paulo=0, renata=0,branco=0,nulo=0;

    while(voto>=0){
        
    printf("==========Votacão==========");
    printf("5 - Paulo\n");
    printf("7 - Renata\n");
    printf("0 - Branco\n");
    printf("Qualquer valor para nulo\n");
    printf("Para encerrar a urna digite o codigo de segurança\n");
    scanf("%d",&voto);

    if(voto==731) break;
    else if (voto==5) paulo++;
    else if (voto==7) renata++;
    else if (voto==0) branco++;
    else nulo++;
    
    }

    int total = paulo + renata + branco + nulo;

    printf("=========Relatório=========");
    printf("Votos para Renata: %d%% - %d\n",(renata*total)/100,renata);
    printf("Votos para Paulo: %d%% - %d\n",(paulo*total)/100,paulo);
    printf("Votos para Branco: %d%% - %d\n",(branco*total)/100,branco);
    printf("Votos para Nulo: %d%% - %d\n",(nulo*total)/100,nulo);

    if(renata>paulo) puts("Candidata Renata Venceu\n");
    else puts("Candidata Paulo Venceu\n");

    return 0;
}