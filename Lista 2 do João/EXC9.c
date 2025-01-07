#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float l1,l2,l3;
	
	printf("Qual é a  medida do primeiro lado?\n");
	scanf(" %f", &l1);
	
	printf("Qual é a  medida do segundo lado?\n");
	scanf(" %f", &l2);
	
	printf("Qual é a  medida do terceiro lado?\n");
	scanf(" %f", &l3);
	
	printf("\nO volume do prisma é: %.2f", l1*l2*l3);
	
}
