/* Ler 10 números e informar o menor e o maior */

#include <stdio.h>
#include <stdlib.h>

main(){
    int numero, maior = 0, menor = 0, i;

    for (i = 1; i <= 10; i++){
        printf("Digite o %d° número inteiro: ", i);
        scanf("%d", &numero);
        if (i == 1){
            maior = numero;
            menor = numero;

        } else {
            if (numero > maior){
                maior = numero;
            }
            if (numero < menor){
                menor = numero;
            }

        }

    } 
    printf("O maior número digitado é: %d\n", maior);
    printf("O menor número digitado é: %d\n", menor);
    return 0;

}