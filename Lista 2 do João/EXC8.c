#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float l,h;
	
	printf("Qual é a medida da altura da pirâmide?\n");
	scanf(" %f", &h);
	
	printf("Qual é a medida do lado da base da pirâmide?\n");
	scanf(" %f", &l);
	
	printf("\nO volume da pirâmide é: %.2f", (l*l)*(h/3));
	
}
