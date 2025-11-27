/* Faça um programa que leia um número inteiro e positivo. Se o número lido for
menor que 7, calcule o seu fatorial. Se for maior ou igual a 7, calcule a soma de 1
até o número lido. */

#include <stdio.h>
#include <stdlib.h>

main(){
    int numero, fatorial = 1, soma = 0;

    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &numero);

    if (numero < 7){
        for(int i = 1; i <= numero; i++){
            fatorial = fatorial * i;

        }
        printf("O fatorial de %d é: %d\n", numero, fatorial);

    } else {
        for (int i = 1; i <= numero; i++){
            soma = soma + i;

        }
        printf("A soma de 1 até %d é: %d\n" , numero, soma);
        
    }
    return 0;
}