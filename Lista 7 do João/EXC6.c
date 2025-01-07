#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome1[50]="Pedro ",nome2[50]="Henrique";
	
	strncat(nome1, nome2, 3);
	
	printf("%s", nome1);
	
	
}
