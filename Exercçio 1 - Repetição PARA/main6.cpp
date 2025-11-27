/* Escreva um algoritmo que leia uma lista com 100 números reais e calcule a
soma, média e qual o maior número digitado (FOR).  */

#include <stdlib.h>
#include <stdio.h>

main(){
    float num, soma = 0, maior = 0, media;
    int i;

    for(i = 1; i <= 100; i++){
        printf("Digite o %d° número real: ", i);
        scanf("%f", &num);
        soma = soma + num;

        if (num > maior){
            maior = num;

        }

    }
    media = soma / 100;
    printf("A soma dos números digitados é: %.2f\n", soma);
    printf("A média dos números digitados é: %.2f\n", media);
    printf("O maior número digitado é: %.2f\n", maior);
    return 0;
}