#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	
	FILE *arquivo;
	arquivo = fopen("lista.txt", "r");
	
	if(arquivo == NULL){
		
		printf("Arquivo não encontrado");
		
	}else{
		
		char frase[50];
		
		while(fgets(frase,sizeof(frase), arquivo)!=NULL){
		
		printf("%s", frase);
		
		}
	}
	
	fclose(arquivo);
		
	
	
	
}
