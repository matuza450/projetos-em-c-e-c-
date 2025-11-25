#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");

    int cont;
    
    // for (var=valor inicial; condição;inremento/decremento)

    for(cont=3; cont<=11;cont++){
        printf("%d\n",cont);
    }

    return 0;
    
}