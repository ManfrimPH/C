#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	char sexo,nome[50];
	
	printf("Me fale seu nome:\n");
	scanf(" %s", &nome);
	
	do{
		
		printf("Qual o seu sexo?(F-M)\n");
		scanf(" %c", &sexo);
		
	}while(sexo!='F' && sexo!='M');
	
	do{
		
		printf("Quantos anos você tem?\n");
		scanf(" %i", &idade);
		
	}while(idade<10 || idade>100);
	
	
	
	
}
