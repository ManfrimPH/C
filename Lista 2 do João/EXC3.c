#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");

	float a,b;
	
	printf("Qual é a medida da base do triangulo?\n");
	scanf(" %f", &b);
	
	printf("Qual é a medida da altura do triangulo?\n");
	scanf(" %f", &a);
	
	printf("A área do triangulo é: %.2f", (b*a)/2);



	
}
