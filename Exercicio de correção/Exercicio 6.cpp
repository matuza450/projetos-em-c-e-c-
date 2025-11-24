#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	char op;
	
	printf("##Menu\n ##a - Inserir\n b - Alterar \n c - Excluir \n s - Sair");
	
	printf("Digite uma das opcoes: \n");
	scanf("%c", &op);
	switch(){
		case 'a':
			printf("Conteudo inserido\n");
		break;
		
		case 'b':
			printf("Conteudo Alterado\n");
		break
		case 'c':
			printf("Conteudo Inserido\n");
		break
		case 'd':
			printf("Conteudo excluido\n");
		break
		case 's':
			printf("Obrigado por usar o programa\n");
		break;
		default:
			printf("opcao invalina\n");
		break;
	system("PAUSE");
	
}
