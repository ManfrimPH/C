#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char biblioteca[50]="string.h", vazio[50];
	
	strcpy(vazio, biblioteca);
	
	printf("%s", vazio);
	
	
}
