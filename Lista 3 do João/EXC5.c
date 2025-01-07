#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");

	int n;

	printf("Me fale o dia da semana em número(1-7)");
	scanf("%i", &n);
	
	switch(n){
		
		case 1:
			
			printf("Domingo");
			break;
			
		case 2:
		
			printf("Segunda-Feira");
			break;
			
		case 3:
		
			printf("Terça-Feira");
			break;
			
		case 4:
		
			printf("Quarta-Feira");
			break;
			
		case 5: 
		
			printf("Quinta-Feira");
			break;
			
		case 6:
		
			printf("Sexta-Feira");
			break;
			
		case 7:
		
			printf("Sábado");
			break;		
		
	}







	
}
