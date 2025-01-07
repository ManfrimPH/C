#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float r;
	
	printf("Qual é a medida do raio do círculo?\n");
	scanf(" %f", &r);
	
	printf("\nO perímetro do círculo é: %.2f", 3.1416*(r+r));

}
