#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float r,h;
	
	printf("Qual é a medida da altura do cilindro?\n");
	scanf(" %f", &h);
	
	printf("Qual é a medida do raio da base do cilindro?\n");
	scanf(" %f", &r);
	
	printf("\nO volume do cilindro é: %.2f", (3.1416*r*r)*h);
	
	
}
