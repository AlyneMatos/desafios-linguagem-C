#include <stdio.h>

#define QTD_ALUNO 3

struct Aluno {
    char nome[50];
    int notas[3];
    float media;
};

float calcularMedia(struct Aluno aluno) {
    float soma = 0;
    for (int i = 0; i < 3; i++) {
        soma += aluno.notas[i];
    }
    return soma / 3;
}

int main() {
    struct Aluno alunos[QTD_ALUNO];

    for (int i = 0; i < QTD_ALUNO; i++) {
        printf("nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);

        printf("Digite as notas do aluno %d:\n", i + 1);
        for (int j = 0; j < QTD_ALUNO; j++) {
            printf("Nota %d: ",j+1);
            scanf("%d", &alunos[i].notas[j]);
        }
        alunos[i].media = calcularMedia(alunos[i]);
    }

    printf("\n==============\n");
    for (int i = 0; i < QTD_ALUNO; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Media: %.2f\n\n", alunos[i].media);
    }

    return 0;
}
