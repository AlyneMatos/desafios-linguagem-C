#include <stdio.h>
#include <stdlib.h>

#define MAX 100


struct Ferramenta {
    int registro;
    char nome[50];
    int quantidade;
    float custo;

};


void inicializarArquivo() {
    struct Ferramenta registros[MAX];
        for (int i = 0; i < MAX; ++i) {

        registros[i].registro = i + 1;
        registros[i].quantidade = 0;
        registros[i].custo = 0.0;
        registros[i].nome[0] = '\0';

    }

    FILE *arquivo = fopen("ferramenta.dat", "wb");

    if (arquivo != NULL) {
        fwrite(registros, sizeof(struct Ferramenta), MAX, arquivo);
        fclose(arquivo);
    }

}

void exibirFerramentas() {
    struct Ferramenta registros[MAX];

    FILE *arquivo = fopen("ferramenta.dat", "rb");

    if (arquivo != NULL) {
        fread(registros, sizeof(struct Ferramenta), MAX, arquivo);
        fclose(arquivo);

        for (int i = 0; i < MAX; ++i) {
            printf("Registro %d: %s - Quantidade: %d - Custo: %.2f\n",
                   registros[i].registro, registros[i].nome, registros[i].quantidade, registros[i].custo);
        }
    }
}


void inserirFerramenta(int registro, const char *nome, int quantidade, float custo) {
    struct Ferramenta registros[MAX];

    FILE *arquivo = fopen("ferramenta.dat", "rb");

    if (arquivo != NULL) {
        
        fread(registros, sizeof(struct Ferramenta), MAX, arquivo);
        fclose(arquivo);

        registros[registro - 1].registro = registro;
        registros[registro - 1].quantidade = quantidade;
        registros[registro - 1].custo = custo;
        strncpy(registros[registro - 1].nome, nome, sizeof(registros[registro - 1].nome));

        arquivo = fopen("ferramenta.dat", "wb");

        if (arquivo != NULL) {
            fwrite(registros, sizeof(struct Ferramenta), MAX, arquivo);
            fclose(arquivo);
            printf("Ferramenta inserida com sucesso!\n");
        }
    }
}


void excluirFerramenta(int registro) {
    struct Ferramenta registros[MAX];

    FILE *arquivo = fopen("ferramenta.dat", "rb");

    if (arquivo != NULL) {

        fread(registros, sizeof(struct Ferramenta), MAX, arquivo);
        fclose(arquivo);

        registros[registro - 1].registro = registro;
        registros[registro - 1].quantidade = 0;
        registros[registro - 1].custo = 0.0;
        registros[registro - 1].nome[0] = '\0';

        arquivo = fopen("ferramenta.dat", "wb");
        if (arquivo != NULL) {

            fwrite(registros, sizeof(struct Ferramenta), MAX, arquivo);
            fclose(arquivo);
            printf("Ferramenta excluída com sucesso!\n");

        }
    }
}


void atualizarFerramenta(int registro, const char *nome, int quantidade, float custo) {
        struct Ferramenta registros[MAX];

    FILE *arquivo = fopen("ferramenta.dat", "rb");

    if (arquivo != NULL) {

        fread(registros, sizeof(struct Ferramenta), MAX, arquivo);
        fclose(arquivo);

        registros[registro - 1].registro = registro;
        registros[registro - 1].quantidade = quantidade;
        registros[registro - 1].custo = custo;
        strncpy(registros[registro - 1].nome, nome, sizeof(registros[registro - 1].nome));

        arquivo = fopen("ferramenta.dat", "wb");
        if (arquivo != NULL) {
            fwrite(registros, sizeof(struct Ferramenta), MAX, arquivo);
            fclose(arquivo);
            printf("Informações da ferramenta atualizadas com sucesso!\n");
        }
    }
}

int main() {

    FILE *verificarArquivo = fopen("ferramenta.dat", "rb");

    if (verificarArquivo == NULL) {
        fclose(verificarArquivo);
        inicializarArquivo();
    }

    exibirFerramentas();
    inserirFerramenta(1, "furadeira", 50, 15.0);
    exibirFerramentas();
    atualizarFerramenta(1, "martelo", 60, 18.0);
    exibirFerramentas();
    excluirFerramenta(1);
    exibirFerramentas();

    return 0;
}
