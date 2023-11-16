#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM_MEMORIA 1000
#define MIN_TAM_PROCESSO 10
#define MAX_TAM_PROCESSO 100

struct Memoria {
    // F - para livre e V - para ocupado
  char estado; 
  int enderecoInicial;
  int enderecoFinal; 
  int tamanho;
  struct Memoria *proximo;
};

struct Memoria *tamanhoDaMemoria(int tamanho) {
  struct Memoria *memoria = (struct Memoria*) malloc(sizeof (struct Memoria));
  memoria->estado = 'f';
  memoria->enderecoInicial = 0;
  memoria->enderecoFinal = 0;
  memoria->tamanho = tamanho;
  memoria->proximo = NULL;

  return memoria;
}

void inicializarProcessos(struct Memoria *memoria, int num) {
    srand(time(NULL));

    int enderecoFinalAnterior = 0;

    for (int i = 0; i < num; i++) {
        int tamanhoProcesso = rand() % (MAX_TAM_PROCESSO - MIN_TAM_PROCESSO + 1) + MIN_TAM_PROCESSO;

        struct Memoria *novoProcesso = (struct Memoria *)malloc(sizeof(struct Memoria));
        novoProcesso->estado = 'v';
        novoProcesso->enderecoInicial = enderecoFinalAnterior;
        novoProcesso->enderecoFinal = enderecoFinalAnterior + tamanhoProcesso;
        novoProcesso->tamanho = tamanhoProcesso;
        novoProcesso->proximo = memoria->proximo;

        novoProcesso->proximo = memoria->proximo;
        memoria->proximo = novoProcesso;

        enderecoFinalAnterior = novoProcesso->enderecoFinal;
    }
}

void imprimirLista(struct Memoria *memoria) {
    while (memoria != NULL) {
        if (memoria->estado == 'f') {
            printf("\nMemoria Inicial [%c] Inicio: %d, Tamanho: %d\n", memoria->estado, memoria->enderecoInicial, memoria->tamanho);
            printf("\n\nProcessando....\n\n");
        } else {
            printf("Processo Estado: %c, Inicio: %d, Final: %d, Tamanho: %d\n", memoria->estado, memoria->enderecoInicial, memoria->enderecoFinal, memoria->tamanho);
        }
        memoria = memoria->proximo;
    }
}

int main(){

  //inicilizacao da memoria de 0 a 1000
  struct Memoria *memoria = tamanhoDaMemoria(TAM_MEMORIA);
  
  int num;
  printf("Quantidade de processos? ");
  scanf("%d",&num);
  inicializarProcessos(memoria,num);
    imprimirLista(memoria);

  return 0;
}
