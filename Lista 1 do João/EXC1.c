#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	int numero;
	printf("Me fala um n�mero seu animal\n");
	scanf("%i", &numero);
	
	printf("O seu n�mero �:%i\n", numero );
	
}
