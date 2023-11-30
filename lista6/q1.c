#include <stdio.h>

struct Aluno {
    float nota1;
    float nota2;
    float media;
};
int main() {
    struct Aluno aluno;

    printf("Digite a nota 1: ");
    scanf("%f", &aluno.nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &aluno.nota2);

    aluno.media = (aluno.nota1 + aluno.nota2) / 2;

    printf("Notas: %f, %f\n", aluno.nota1, aluno.nota2);
    printf("Media: %.2f\n", aluno.media);

    return 0;
}
