#include<stdio.h>
#include<locale.h>

main(){
	float area,raio;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Qual o valor do raio do circulo?");
	scanf("%f", &raio);
	
	area=3.1416*raio*raio;
	
	printf("A área do circulo é:%.4f", area);
}
