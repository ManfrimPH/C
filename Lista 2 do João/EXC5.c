#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float r;
	
	printf("Qual � a medida do raio do c�rculo?\n");
	scanf(" %f", &r);
	
	printf("\nO per�metro do c�rculo �: %.2f", 3.1416*(r+r));

}
