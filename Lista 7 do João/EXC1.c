#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char biblioteca[50]="string.h";
	
	printf("A biblioteca string.h tem %i caracteres", strlen(biblioteca));
	
}
