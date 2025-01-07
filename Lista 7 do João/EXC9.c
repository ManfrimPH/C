#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char biblioteca[50]="strlib.h";
	char *palavra=strstr(biblioteca, "lib");
	
	if(palavra){
		
		printf("Palavra encontrada! '%s'", palavra);
		
	}else{
		
		printf("Palavra encontrada!");
		
	}
		
}
