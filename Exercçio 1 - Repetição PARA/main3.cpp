/* Faça um programa para calcular e escrever o valor de S: S =  */


#include <stdio.h>
#include <stdlib.h>

main(){
    int idade, qtd18, cont;
    for(cont=1;cont<=10;cont++){
        printf("Digite sua idade\n");
        scanf("%d", &idade);

        if(idade>=18){
            qtd18++;

        }

        printf("Quantidade de idade=%d\n", qtd18);
    }

    return 0;
}