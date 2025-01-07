#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1,n2,n3;
	
	printf("Qual foi sua nota da primeira prova?(0-10)\n");
	scanf(" %f", &n1);
	
	printf("Qual foi sua nota da segunda prova?(0-10\n");
	scanf(" %f", &n2);
	
	printf("Qual foi sua nota da terceira prova?(0-10)\n");
	scanf(" %f", &n3);
	
	printf("\nA media das três provas é: %.2f", (n1+n2+n3)/2);
	
}
