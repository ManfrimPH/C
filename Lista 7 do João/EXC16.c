#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome1[50]="Labirinto no Escuro", nome2[50]="Senhor das Moscas";
	
	if(strncmp(nome1, nome2, 3)==0){
		
		printf("Os três primeiros caracteres são iguais");

	}else{
		
		printf("Os três primeiros caracteres são diferentes");
		
	}
	
	
	
	
}
