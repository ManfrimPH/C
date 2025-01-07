#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float r;
	
	printf("Qual é a medida do raio da esfera?\n");
	scanf(" %f", &r);
	
	
	printf("\nO volume da esfera é: %.2f", (4*3.1416*r*r*r)/3);
	
}
