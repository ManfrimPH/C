#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float l,h;
	
	printf("Qual � a medida da altura da pir�mide?\n");
	scanf(" %f", &h);
	
	printf("Qual � a medida do lado da base da pir�mide?\n");
	scanf(" %f", &l);
	
	printf("\nO volume da pir�mide �: %.2f", (l*l)*(h/3));
	
}
