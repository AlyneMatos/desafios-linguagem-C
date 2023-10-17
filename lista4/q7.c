// Escreva um programa que concatene duas strings utilizando ponteiros.
#include <stdio.h>
#define TAM 20
int main() {
    char s1[TAM],s2[TAM], c[(TAM*2)+1];

    printf("Digite a primeira String: ");
    scanf("%s",s1);
    printf("Digite a segunda String: ");
    scanf("%s",s2);

    int i = 0;
    char *p1 = s1;
    while (*p1 != '\0') {
      *(c+i) = *s1;
      i++;
      p1++;
    }

    char *p2 = s2;
     while (*p2 != '\0') {
      *(c+i) = *s2;
      i++;
      p2++;
    }

    *(c+i) = '\0';

    printf("%s", c);

    return 0;
}