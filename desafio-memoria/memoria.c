#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM_MEMORIA 1000
#define MIN_TAM_PROCESSO 10
#define MAX_TAM_PROCESSO 100

struct Memoria {
  char estado; 
  int enderecoInicial;
  int enderecoFinal; 
  int tamanho;
  struct Memoria *proximo;
};

struct Memoria *tamanhoDaMemoria(int tamanho) {

  struct Memoria *memoria = (struct Memoria*) malloc(sizeof (struct Memoria));

  memoria->estado = 'L';
  memoria->enderecoInicial = 0;
  memoria->enderecoFinal = 0;
  memoria->tamanho = tamanho;
  memoria->proximo = NULL;

  return memoria;
}

void inicializarProcessos(struct Memoria *memoria, int num) {
    srand(time(NULL));

    int enderecoFinalAnterior = 0;

    for (int k = 0; k < num; k++) {

            int tamanhoProcesso = rand() % (MAX_TAM_PROCESSO - MIN_TAM_PROCESSO + 1) + MIN_TAM_PROCESSO;

            struct Memoria *novoProcesso = (struct Memoria *)malloc(sizeof(struct Memoria));

            novoProcesso->estado = 'O';
            novoProcesso->enderecoInicial = enderecoFinalAnterior;
            novoProcesso->enderecoFinal = enderecoFinalAnterior + tamanhoProcesso;
            novoProcesso->tamanho = tamanhoProcesso;

            // Aqui adiciona novo processo na lista encadeada
            novoProcesso->proximo = memoria->proximo;
            memoria->proximo = novoProcesso;

            enderecoFinalAnterior = novoProcesso->enderecoFinal;
      }
}

void imprimirLista(struct Memoria *memoria) {
  int cont =0;
    while (memoria != NULL) {
        if (memoria->estado == 'L') {
            printf("\nMemoria Inicial [%c] Inicio: %d, Tamanho: %d\n", memoria->estado, memoria->enderecoInicial, memoria->tamanho);
            printf("\n\nProcessando....\n\n");
        } else {
            printf("Processo[%d] Estado: %c, Inicio: %d, Final: %d, Tamanho: %d\n", cont,memoria->estado, memoria->enderecoInicial, memoria->enderecoFinal, memoria->tamanho);
        }
        memoria = memoria->proximo;
        cont++;
    }
}

int main(){

  struct Memoria *memoria = tamanhoDaMemoria(TAM_MEMORIA);
  
  int num;
  printf("Quantidade de processos? ");
  scanf("%d",&num);

  inicializarProcessos(memoria,num);
  imprimirLista(memoria);

  return 0;
}
