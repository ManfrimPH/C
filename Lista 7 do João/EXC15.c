#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome1[50]="Labirinto no Escuro", nome2[50]="Luís Dill";
	char *espaco=strchr(nome2, ' ');
	int tamanhoNome;
	
	tamanhoNome=strlen(espaco);
	
	strcat(nome1, " -- ");
	
	strncat(nome1, nome2, tamanhoNome);
	
	printf("%s", nome1);
	
	
	
	
}
