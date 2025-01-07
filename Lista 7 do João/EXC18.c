#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char livro[50];
	
	printf("Me fale o nome de um livro:\n");
	gets(livro);
	
	char *palavra=strstr(livro, "the");
	
	if(palavra!="/0"){
		
		printf("%s", palavra);
		
	}
	
	
}
