#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	
	FILE *arquivo;
	arquivo = fopen("numeros.txt", "r");
	
	if(arquivo == NULL){
		
		printf("Arquivo não encontrado");
		
	}else{
		
		int n, soma = 0;
		
		while(fscanf(arquivo, "%i", &n)!= EOF){	
		
			soma+=n;
		
		}	
		
		printf("%i", soma);
		
	}
	
	
	
	fclose(arquivo);
		
	
}
