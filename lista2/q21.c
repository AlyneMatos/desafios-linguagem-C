// Um pal ́ındromo  ́e um n ́umero, ou frase textual, que pode ser lido da mesma forma da esquerda para
// a direita e vice-versa. Por exemplo, cada um dos seguintes inteiros de cinco d ́ıgitos  ́e um pal ́ındromo:
// 12321, 55555, 45554 e 11611. Escreva um programa que leia um inteiro de cinco d ́ıgitos e determine se
// ele  ́e ou n ̃ao um pal ́ındromo. [Dica: use os operadores de divis ̃ao e m ́odulo para separar o n ́umero em
// seus d ́ıgitos individuais.]
#include <stdio.h>

int main() {
    int num, original, inverso = 0, digito;

    printf("inteiro de cinco digitos: ");
    scanf("%d", &num);

    original = num;

    while (num > 0) {
        digito = num % 10;
        inverso = inverso * 10 + digito;
        num /= 10;
    }

    if (original == inverso) {
        printf("%d e um palindromo.\n", original);
    } else {
        printf("%d nao e um palindromo.\n", original);
    }

    return 0;
}