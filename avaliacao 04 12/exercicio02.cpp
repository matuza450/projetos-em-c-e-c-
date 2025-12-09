/* Escreva um programa em C que leia um número inteiro entre 1 e 10 e utilize um laço for para imprimir a tabuada desse número de 1 a 10.
Texto de resposta Questão 2 */

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int num;
    printf("Digite um número inteiro entre 1 e 10: ");
    scanf("%d", &num);
    if (num < 1 || num > 10){
        printf("Número inválido! Por favor, insira um número entre 1 e 10.\n ");
    } else {
        printf("Tabuada do %d: \n", num);
        for (int i = 1; i <= 10; i++){
            printf("%d x %d = %d\n", num, i, num * i);

        }
        
    }
    return 0;

}