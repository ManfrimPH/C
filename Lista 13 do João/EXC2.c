#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	
	FILE *arquivo;
	arquivo = fopen("meuarquivo.txt", "r");
	
	if(arquivo == NULL){
		
		printf("Arquivo não encontrado");
		
	}else{
	
		char frase[50];
		
		fgets(frase, sizeof(frase), arquivo);
	
		printf("%s", frase);
		
	}
	
	fclose(arquivo);
		
	
	
}
