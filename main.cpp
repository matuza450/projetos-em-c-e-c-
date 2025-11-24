#include <stdio.h>

int main() {
    printf("--- Questao 1 ---\n");
    double v1, v2, v3;
    printf("Insira tres valores: ");
    scanf("%lf %lf %lf", &v1, &v2, &v3);
    if (v1 > 0 && v2 > 0 && v3 > 0) {
        printf("Produto: %lf\n", v1 * v2 * v3);
    }

    printf("\n--- Questao 2 ---\n");
    double lado1, lado2;
    printf("Insira os dois lados do retangulo: ");
    scanf("%lf %lf", &lado1, &lado2);
    printf("Area do retangulo: %lf\n", lado1 * lado2);

    printf("\n--- Questao 3 ---\n");
    double n1, n2, n3, n4;
    printf("Insira quatro numeros reais: ");
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    printf("Media: %lf\n", (n1 + n2 + n3 + n4) / 4.0);

    printf("\n--- Questao 4 ---\n");
    int num1, num2;
    printf("Insira dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);
    if (num1 < num2) {
        printf("Menor numero: %d\n", num1);
    } else {
        printf("Menor numero: %d\n", num2);
    }

    printf("\n--- Questao 5 ---\n");
    int a, b, c;
    printf("Insira tres numeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
    int maior = a;
    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }
    printf("Maior numero: %d\n", maior);

    printf("\n--- Questao 6 (BONUS) ---\n");
    char opcao;
    printf("## Menu ##\n");
    printf("a - Inserir\n");
    printf("b - Alterar\n");
    printf("c - Excluir\n");
    printf("s - Sair\n");
    printf("Digite sua opcao: ");
    scanf(" %c", &opcao);

    switch (opcao) {
        case 'a':
            printf("Conteudo inserido\n");
            break;
        case 'b':
            printf("Conteudo alterado\n");
            break;
        case 'c':
            printf("Conteudo excluido\n");
            break;
        case 's':
            printf("Obrigado por usar o programa\n");
            break;
        default:
            printf("Opcao invalida\n");
    }

    return 0;
}