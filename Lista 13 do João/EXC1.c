#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	FILE *arquivo;
	arquivo = fopen("meuarquivo.txt", "w+");
	
	if(arquivo == NULL){
		
		printf("Arquivo não encontrado");
		
	}else{
		
	fprintf(arquivo, "Olá, Mundo!");
		
	}
	
	fclose(arquivo);
		
}
