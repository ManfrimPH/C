#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char n1[50], n2[50];
	
	printf("Me fale a primeira parte da fraze\n");
	gets(n1);
	
	printf("Me fale a segunda parte da fraze\n");
	gets(n2);
	
	strcat(n1, " ");
	strcat(n1, n2);
	
	printf("A junção das duas é: %s", n1);
	
	
	
}
