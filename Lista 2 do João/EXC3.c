#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");

	float a,b;
	
	printf("Qual � a medida da base do triangulo?\n");
	scanf(" %f", &b);
	
	printf("Qual � a medida da altura do triangulo?\n");
	scanf(" %f", &a);
	
	printf("A �rea do triangulo �: %.2f", (b*a)/2);



	
}
