#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1,n2,n3;
	
	printf("Me fale um numero:\n");
	scanf("%i", &n1);
	
	printf("Me fale outro numero:\n");
	scanf("%i", &n2);
	
	printf("Me fale outro numero:\n");
	scanf("%i", &n3);
	
	printf("\nA soma primeiro com o terceiro, multiplicado pelo segundo é: %i", (n1+n3)*n2);
	
	
	
}
