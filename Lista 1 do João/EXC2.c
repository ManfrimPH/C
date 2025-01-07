#include <stdio.h>
#include <locale.h>
main(){
	setlocale(LC_ALL, "portuguese");
	int n1, n2, resultado;
	
	printf("Informe o primeiro número:\n");
	scanf("%i",&n1);
	
	printf("Informe o segundo número:\n");
	scanf("%i",&n2);
	
	resultado=n1+n2;
	printf("Resultado da soma é:%i",resultado);
}
