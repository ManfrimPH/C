#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	int numero;
	printf("Me fala um número seu animal\n");
	scanf("%i", &numero);
	
	printf("O seu número é:%i\n", numero );
	
}
