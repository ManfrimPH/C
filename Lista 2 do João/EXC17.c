#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");

	char nome1[50],nome2[50],nome3[50],nome4[50];
	int idade1,idade2,idade3,idade4;
	
	printf("Qual o seu nome?\n");
	scanf("%s", &nome1);
	
	printf("%s, quantos anos você tem?\n", nome1);
	scanf(" %i", &idade1);
	
	printf("Qual o seu nome?\n");
	scanf("%s", &nome2);
	
	printf("%s, quantos anos você tem?\n", nome2);
	scanf(" %i", &idade2);
	
	printf("Qual o seu nome?\n");
	scanf("%s", &nome3);
	
	printf("%s, quantos anos você tem?\n", nome3);
	scanf(" %i", &idade3);
	
	printf("Qual o seu nome?\n");
	scanf("%s", &nome4);
	
	printf("%s, quantos anos você tem?\n", nome4);
	scanf(" %i", &idade4);
	
	printf("A média das 4 idades é: %i", (idade1+idade2+idade3+idade4)/4);
	
	
		
	
	
}
