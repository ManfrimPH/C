#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome1[50]="Labirinto no escuro";
	char *local=strchr(nome1, 'e');
	
	printf("%s", local);
	
	
	
	
}
