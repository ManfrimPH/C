#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade,i;
	char nome[50];
	
	for(i=1;i<=3;i++){
		
		printf("Qual o seu nome?\n");
		scanf("%s", &nome);
		
		printf("%s, qual a sua idade\n", nome);
		scanf("%i", &idade);
	
	}
	
	
	
	
}
