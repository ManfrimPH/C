#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");

	int n;
	float n1,n2;
	
	printf("Me fale o primeiro número:\n");
	scanf(" %f", &n1);
	
	printf("Me fale o segundo número:\n");
	scanf(" %f", &n2);
	
	printf("Qual operação lógica você quer fazer?\n 1-Soma\n 2-Subtração\n 3-Multiplicação\n 4-Divisão\n");
	scanf(" %i", &n);
	
	switch(n){
		
		case 1:
			
			printf("A soma dos dois valores é:%.2f", n1+n2);
			break;
		
		case 2:
			
			printf("A subtração dos dois valores é:%.2f", n1-n2);
			break;
			
		case 3:
			
			printf("A multiplicação dos dois valores é:%.2f", n1*n2);
			break;
			
		case 4:
			
			printf("A divisão dos dois valores é:%.2f", n1/n2);
			break;
			
			
	}
	
	
	
	

		
}
