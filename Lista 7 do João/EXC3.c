#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome1[50]="Roberto", nome2[50]="Carlos", nome[50];
	
	strcpy(nome, nome1);
	strcat(nome, " ");
	strcat(nome, nome2);
	
	printf("%s", nome);
	
	
}
