#include <stdio.h>

int main() {
    FILE *arquivo;
    char nome[50];
    int idade;
    float altura;

    arquivo = fopen("dados_usuarios.csv", "w");

    if (arquivo == NULL) {
        printf("Erro.\n");
        return 1;
    }

    fprintf(arquivo, "Nome,Idade,Altura\n");

    for (int i = 0; i < 3; i++) {
        printf("Digite o nome do usuario: ");
        scanf("%s", nome);

        printf("Digite a idade do usuario: ");
        scanf("%d", &idade);

        printf("Digite a altura do usuario: ");
        scanf("%f", &altura);

        fprintf(arquivo, "%s,%d,%.2f\n", nome, idade, altura);
    }

    fclose(arquivo);

    return 0; 
}
