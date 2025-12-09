/*Desenvolva um programa em C que leia um número inteiro N (≥ 0) e utilize um laço for para calcular e mostrar o fatorial de N. */

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale (LC_ALL, "");
    int N;
    unsigned long long fatorial = 1;
    printf("Digite um número inteiro N (≥ 0): ");
    scanf("%d", &N);
    if (N < 0){
        printf("Número inválido! Por favor, insira um número inteiro maior ou igual a 0.\n");

    } else {
        for (int i = 1; i <= N; i++){
            fatorial *= i;

        }
        printf("O fatorial de %d é: %llu\n", N, fatorial);

    }
    return 0;

}