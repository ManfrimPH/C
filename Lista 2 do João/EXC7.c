#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float r,h;
	
	printf("Qual � a medida da altura do cone?\n");
	scanf(" %f", &h);
	
	printf("Qual � a medida do raio da base do cone?\n");
	scanf(" %f", &r);
	
	printf("\nO volume do cone �: %.2f", ((3.1416*r*r)/3)*h);
	
	
}
