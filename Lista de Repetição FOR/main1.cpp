#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int num;
    printf("Insira um valor inteiro positivo: ");
    scanf("%d", &num);
    for(int i=0;i<=10;i++){
        printf("%d x %d = %d\n", num, i, num*i);

        
    }
    system("pause");
}