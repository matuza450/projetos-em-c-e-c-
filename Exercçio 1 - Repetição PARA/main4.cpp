/* Uma determinada empresa armazena para cada funcionário (10 funcionários no
total) uma ficha contendo o código, o número de horas trabalhadas e o seu nº de
dependentes.
Considerando que:
a. A empresa paga 12 reais por hora e 40 reais por dependentes.
b. Sobre o salário são feitos descontos de 8,5% para o INSS e 5% para IR.

Faça um programa para ler o código, número de horas trabalhadas e número de
dependentes de cada funcionário. Após a leitura, escreva qual o código, os valores
descontados para cada tipo de imposto e finalmente o salário líquido de cada um dos
funcionários. */

#include <stdio.h>
#include <stdlib.h>

main(){
    int codigo, horas_trabalhadas, num_dependentes;
    float salario_bruto, desconto_inss, desconto_ir, salario_liquido;

    for(int i=1; i<=10; i++){
        printf("Digite o código do funcionário %d: ", i);
        scanf("%d", &codigo);
        printf("Digite o número de horas trabalhadas pelo funcionário %d: ", i);
        scanf("%d", &horas_trabalhadas);
        printf("digite o número de dependentes do funcionário %d: ", i);
        scanf("%d", &num_dependentes);

        salario_bruto = (horas_trabalhadas * 2) + (num_dependentes * 40);
        desconto_inss = salario_bruto * 0.085;
        desconto_ir = salario_bruto * 0.05;
        salario_bruto = salario_bruto - desconto_inss - desconto_ir;
        printf("O salário líquido do funcionário de código %d é: R$ %.2f\n ", codigo, salario_bruto);

        return 0;

        
    }
}