#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	FILE *arquivo;
	arquivo = fopen("meuarquivo.txt", "w+");
	
	if(arquivo == NULL){
		
		printf("Arquivo n�o encontrado");
		
	}else{
		
	fprintf(arquivo, "Ol�, Mundo!");
		
	}
	
	fclose(arquivo);
		
}
