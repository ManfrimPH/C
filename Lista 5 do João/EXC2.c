#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade,i;
	char nome[50];
	
	i=1;
	
	while(i<=3){
	
		printf("Qual o seu nome?\n");
		scanf("%s", &nome);
		
		printf("%s, qual a sua idade\n", nome);
		scanf("%i", &idade);
		
		i++;
		
	}
	
}
