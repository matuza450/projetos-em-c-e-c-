/*Escreva um programa em C que leia um valor inteiro N e imprima, usando um laço for, todos os números pares entre 1 e N (inclusive). */

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int N;
    printf("Digite um valor inteiro N: ");
    scanf("%d", &N);
    printf("Números pares entre 1 e %d:\n", N);
    for (int i = 1; i <= N; i++){
        if(i % 2 == 0){
            printf("%d\n", i);

        }

    }
    return 0;
}