#include <stdio.h>
#include <stlib.h>
#include <locale.h>

main(){

	setlocale (LC_ALL, "");
	
	int a,b;
	printf("Digite o vlaor para o primeiro numero: \n");
	scanf("%f",&a);
	
	pritnf("Digite o vlaor para o segundo numero: \n");
	scanf("%f", &b);
	if(a<b){
		printf("O menor numero é o primeiro a=%d",a);
		
	} else {
		printf("O menor numero é o segundo b=%d",b);
	}
	
	
	system(PAUSE);
	
	
}
