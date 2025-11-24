#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	float a,b,c;
	printf("Digite o valor para a\n");
	scanf("%f", &a);
	
	printf("Digie o valor para b\n");
	scanf("%f", &b);
	
	printf("Digite o vlaor para c\n");
	scanf("%f", &c);
	
	if((a<0)||(b<0)(c<0))
		printf("Processamento inv�lido - Um dos numeros e negativo\n");
		
	else
		printf("Produto=%.2f\n", a*b*c);		
	
	system("PAUSE");
	
}
