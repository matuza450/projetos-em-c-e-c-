#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");

    int a, b, c;

    printf("Digita o valor de A: ");
    scanf(" %d", &a);
    printf("Digite o valor de B: ");
    scanf(" %d", &b);
    printf("Digita o valor de C: ");
    scanf(" %d", &c);

    int maior = a;

    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }
    printf("Maior numero: %d\n", maior);

    return 0;
}