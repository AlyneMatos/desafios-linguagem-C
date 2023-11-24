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

  memoria->estado = 0; // 0 para livre, 1 para ocupado
  memoria->enderecoInicial = 1; 
  memoria->enderecoFinal = tamanho;
  memoria->tamanho = tamanho;
  memoria->proximo = NULL;

  return memoria;
}
void inicializarProcessos(struct Memoria *memoria, int tam) {
  while (memoria != NULL) {
    if (!memoria->estado && memoria->tamanho >= tam) {

      struct Memoria *novoProcesso = (struct Memoria *) malloc(sizeof(struct Memoria));

      novoProcesso->enderecoInicial = memoria->enderecoInicial;
      novoProcesso->enderecoFinal = memoria->enderecoInicial + tam - 1;
      novoProcesso->tamanho = tam;
      novoProcesso->estado = 1; 
      novoProcesso->proximo = memoria->proximo;

      memoria->enderecoInicial = novoProcesso->enderecoFinal + 1;
      memoria->tamanho -= tam;
      memoria->proximo = novoProcesso;

      break;
    }
      memoria = memoria->proximo;
  }
}

void imprimirLista(struct Memoria *memoria) {
    while (memoria != NULL) {
        if (memoria->estado) {
            printf("[Ocupado] Início: %d, Fim: %d, Tamanho: %d\n", memoria->enderecoInicial, memoria->enderecoFinal, memoria->tamanho);
        } else {
            printf("[Livre] Início: %d, Fim: %d, Tamanho: %d\n", memoria->enderecoInicial, memoria->enderecoFinal, memoria->tamanho);
        }
        memoria = memoria->proximo;
    }
}

int main(){

  struct Memoria *memoria = tamanhoDaMemoria(TAM_MEMORIA);
  
  int num;
  printf("Quantidade de processos? ");
  scanf("%d",&num);

  for (int i = 0; i < num; ++i) {
    int tamanhoProcesso = rand() % MAX_TAM_PROCESSO;
    inicializarProcessos(memoria, tamanhoProcesso);
  }

  printf("\nEstado da Memória:\n");
  imprimirLista(memoria);

  while (memoria != NULL) {
      struct Memoria *proximo = memoria->proximo;
      free(memoria);
      memoria = proximo;
  }

  return 0;
}
