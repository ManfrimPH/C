#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome1[50]="Luís Dill";
	char *letra= strchr(nome1, 'u');
	
	if(letra){
		
		printf("Letra encontrada! '%c'", *letra);
		
	}else{
		
		printf("Letra não encontrada!");
		
	}
	
	
	
	
}
