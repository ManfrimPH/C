#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("Quantos anos voc� tem?\n");
	scanf(" %i", &idade);
	
	switch(idade){
		
		case 0 ... 11:
			
			printf("Voc� � uma crian�a.");
			break;
		
		case 12 ... 18:
			
			printf("Voc� � um adolescente.");
			break;
			
		case 19 ... 59:
			
			printf("Voc� � um adulto.");
			break;
			
		case 60 ... 140:
			
			printf("Voc� � velho :)");	
		
	}
		
	
	
	
}
