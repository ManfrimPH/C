#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
    int n1;
	
	printf("Me fale um n�mero inteiro:\n");
	scanf(" %i", &n1);
	
	printf("O restante da divis�o deste n�mero por 2 �: %i", n1%2);
	
		
}
