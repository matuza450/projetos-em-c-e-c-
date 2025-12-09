/* Escreva um programa em C que leia um número inteiro positivo N e utilize um laço de repetição for para somar todos os números inteiros de 1 até N. Ao final, o programa deve exibir o valor total da soma.

Exemplo:
Entrada: 5
Processo: 1 + 2 + 3 + 4 + 5
Saída: 15 */

#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "");
    int N, soma = 0;
    printf("Digite um número inteiro positivo: ");
    scanf("%d" , &N);
    for (int i = 1; i <= N; i++){
        soma += i;

    }
    printf("A soma dos números inteiros de 1 até %d é: %d\n", N, soma);
    return 0;
}