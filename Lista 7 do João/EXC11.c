#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome1[50]="Luís Dill", nome2[50];
	
	printf("%s", nome1);
	
	strcpy(nome1, nome2);
	
	printf("%s", nome1);
	
	strcpy(nome2, "William Golding");
	
	printf("%s -- %s", nome1,nome2);
	
}
