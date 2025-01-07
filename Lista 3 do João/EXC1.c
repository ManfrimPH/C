#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("Quantos anos você tem?\n");
	scanf(" %i", &idade);
	
	switch(idade){
		
		case 0 ... 11:
			
			printf("Você é uma criança.");
			break;
		
		case 12 ... 18:
			
			printf("Você é um adolescente.");
			break;
			
		case 19 ... 59:
			
			printf("Você é um adulto.");
			break;
			
		case 60 ... 140:
			
			printf("Você é velho :)");	
		
	}
		
	
	
	
}
