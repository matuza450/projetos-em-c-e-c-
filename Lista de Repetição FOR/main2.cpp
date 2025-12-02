/* Faça um programa que receba a idade, a altura de 15 pessoas. Calcule e escreva:
• a quantidade de pessoas com idade superior a 50 anos;
• a média das alturas das pessoas com idade entre 10 e 20 anos;
• a maior altura encontrada; */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int idade, countIdade50 = 0, countIdade10a20 = 0;
    float altura, somaAltura10a20 = 0, mediaAltura10a20 = 0, maiorAltura = 0;
    for(int i = 1; i <= 15; i++){
        printf("Digite a idade da %d° pessoa: ", i);
        scanf("%d", &idade);
        printf("Digite a altura da %d° pessoa (em metros): ", i);
        scanf("%f", &altura);
        if (idade > 50){
            countIdade50++;

        }
        if (idade >= 10 && idade <= 20){
            somaAltura10a20 += altura;
            countIdade10a20++;

        }
        if (altura > maiorAltura){
            maiorAltura = altura;

        }

    }
    if (countIdade10a20 > 0) {
        mediaAltura10a20 = somaAltura10a20 / countIdade10a20;
        printf("Média das alturas das pessoas com idade entre 10 e 20 anos: %.2f metros\n", mediaAltura10a20);
    } else {
        printf("Nenhuma pessoa com idade entre 10 e 20 anos foi registrada.\n");

    }
    printf("Quantidade de pessoas com idade superior a 50 anos: %d\n", countIdade50);
    printf("A maior altura encontrada: %.2f metros\n", maiorAltura);
    system("pause");
}