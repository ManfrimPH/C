#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1,n2,t;
	
	printf("Me fale o primeiro n�mero:\n");
	scanf(" %f", &n1);
	
	printf("Me fale o segundo n�mero:\n");
	scanf(" %f", &n2);
	
	
	printf("\nA decima parte da subtra��o do primeiro pelo segundo �: %.2f", (n1-n2)*0.1);
	
	
	
}
