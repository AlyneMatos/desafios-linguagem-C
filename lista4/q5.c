#include <stdio.h>
int main() {
    char *s = "hello"; 
    int tamanho = 0;

    while (*s != '\0') {
        tamanho++;
        s++; 
    }
    printf("A string tem tamanho %d.\n",tamanho);
    return 0;
}
