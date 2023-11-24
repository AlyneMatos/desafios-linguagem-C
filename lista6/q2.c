// Escreva um programa em C que utilize uma Estrutura estoque que contém uma string com o
// nomePeca, um número inteiro para identificar o número da peça, o preço em ponto flutuante e um
// elemento inteiro para identificar o número do pedido.
#include <stdio.h>
#include <stdlib.h>
#define tam 2
struct Estoque
{
    int cod;
    char nome[20];
    float preco;
    int numPedido;
};
void gerarEstoque(struct Estoque *,int );
void exibirEstoque(struct Estoque *,int );

int main(){
    struct Estoque estoque[tam];

    gerarEstoque(estoque,tam);
    exibirEstoque(estoque,tam);
        
    return 0;
}
void gerarEstoque(struct Estoque *e,int t){
    for(int i=0;i<t;i++){
        printf("\n=====================");
        (e+i)->cod = i+1001;
        printf("\nCodigo: %d", (e+i)->cod);
        printf("\nNome: ");
        scanf(" %s", (e+i)->nome);
        printf("\nPreco: ");
        scanf("%f",&(e+i)->preco);
    }
}
void exibirEstoque(struct Estoque *e,int t){
    for(int i=0;i<t;i++){
        printf("\n=====================");
        printf("\nCodigo: %d", (e+i)->cod);
        printf("\nNome: %s",(e+i)->nome);
        printf("\nPreco: %f",(e+i)->preco);
        (e+i)->numPedido = i+1;
        printf("\nNúmero de pedido: %d",(e+i)->numPedido);
    }
}
