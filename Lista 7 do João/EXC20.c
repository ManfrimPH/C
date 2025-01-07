#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char frase[50],n1[50]="Biblioteca Publíca";
	
	printf("Me fale uma frase:");
	gets(frase);
	
	if(frase==n1){
		
		printf("Seja bem vindo");
		
	}
	
	
}
