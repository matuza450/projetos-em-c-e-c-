/* Faça um programa que solicite ao usuário 10 números inteiros e, ao final,
informe a quantidade de números ímpares e pares lidos. Calcule também a soma
dos números pares e a média dos números ímpares. */

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int numero;
    int quantidade_pares = 0, quantidade_impares = 0;
    int soma_pares = 0, soma_impares = 0;

    for (int i = 0; i < 10; i++){
        printf("Digite o %d° número inteiro: ", i + 1);
        scanf("%d", &numero);
        if (numero % 2 == 0){
            quantidade_pares++;
            soma_pares += numero;

        } else {
            quantidade_impares++;
            soma_impares += numero;
        }
    }

    if (quantidade_impares > 0){
        double media_impares = (double)soma_impares / quantidade_impares;
        printf("Quantidade de números pares: %d\n", quantidade_pares);
        printf("Quantidade de números ímpares: %d\n", quantidade_impares);
        printf("Soma dos números pares: %d\n", soma_pares);
        printf("Média dos números ímpares: %.2f\n", media_impares);

    } else {
        printf("Nenhum número ímpar foi digitado.\n");
        printf("Quantidade de números pares: %d\n", quantidade_pares);
        printf("Soma dos números pares: %d\n", soma_pares);
        printf("Quantidade de números ímpares: %d\n", quantidade_impares);
        printf("Média dos números ímpares: N/A\n");
        printf("Não foi possível calcular a média dos números ímpares.\n");
        
    }

    return 0;
}