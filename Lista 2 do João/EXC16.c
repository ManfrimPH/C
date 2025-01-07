#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1,n2,n3,n4,n5;
	
	printf("Me fale o primeiro número:\n");
	scanf(" %f", &n1);
	
	printf("Me fale o segundo número:\n");
	scanf(" %f", &n2);
	
	printf("Me fale o terceiro número:\n");
	scanf(" %f", &n3);
	
	printf("Me fale o quarto número:\n");
	scanf(" %f", &n4);
	
	printf("Me fale o quinto número:\n");
	scanf(" %f", &n5);
	
	printf("\nA soma dos 5 números é: %.2f", n1+n2+n3+n4+n5);

	
}
