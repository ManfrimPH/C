#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
    int n1;
	
	printf("Me fale um número inteiro:\n");
	scanf(" %i", &n1);
	
	printf("O restante da divisão deste número por 2 é: %i", n1%2);
	
		
}
