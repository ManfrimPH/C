#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50]="Labirinto no Escuro",letra[50];
		
	strncpy(letra, nome, 5);
	
	printf("%s",letra);	
		
}
