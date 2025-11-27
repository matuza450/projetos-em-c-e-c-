// 1. Fazer um programa para mostrar os 20 primeiros números ímpares.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    printf("OS 20 PRIMEIROS NÚMEROS ÍMPARES SÃO:\n");

    for (int i = 1; i <= 20; i++){
        int numero_impar = (2 * i) - 1;
        printf("%d\n", numero_impar);

    }

    return 0;
}