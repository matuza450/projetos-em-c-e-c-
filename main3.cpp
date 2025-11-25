#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    int numero, cont, neg=0;

    for (cont=0; cont <5;cont++){
        printf("\nDigite um numero inteiro: ");
        scanf("%d", &numero);
        if (numero<0) neg=neg+1;
    }

    printf("\nO numero de valores negativos é%d\n", neg);

    system("pause");
}