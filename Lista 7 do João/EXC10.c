#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50]="string.h";
	int quantidade;
	
	quantidade=strlen(nome);
	
	if(quantidade>10){
		
		printf("Tem mais de 10 caracteres");
		
	}else if(quantidade<10){
		
		printf("Tem menos de 10 caracteres");
		
	}else{
		
		printf("Tem 10 caracteres");
		
	}
	
}
