#include <stdio.h>

struct Professor {
    char nome[50];
};

struct Disciplina {
    char nome[50];
    struct Professor professor;
};

int main() {
    struct Disciplina disciplina;

    printf("Digite o nome da disciplina: ");
    scanf("%s", disciplina.nome);

    printf("Digite o nome do professor: ");
    scanf("%s", disciplina.professor.nome);

    printf("\nInformacoes da Disciplina:\n");
    printf("Nome da Disciplina: %s\n", disciplina.nome);
    printf("Nome do Professor: %s\n", disciplina.professor.nome);

    return 0;
}
