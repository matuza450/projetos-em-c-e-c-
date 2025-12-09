/* Faça um programa em C que leia um número inteiro X e utilize um laço for para exibir uma contagem regressiva de X até 0. */

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int x;
    printf("Digite um número inteiro: ");
    scanf("%d", &x);
    printf("Contagme regressiva de %d até 0: \n", x);
    for (int i = x; i >= 0; i--){
        printf("%d\n", i);

    }
    return 0;
}