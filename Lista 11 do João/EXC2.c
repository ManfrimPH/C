#include <stdio.h>
#include <locale.h>
#include <string.h>


conta( a, b ){
	
	int soma;
	
	soma = a + b;
	
	return (soma);
	
}


main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x,y,z;
	
	printf("Digite o primeiro valor: ");
	scanf("%i", &x);
	
	printf("Digite o segundo valor: ");
	scanf("%i", &y);
	
	z = conta(x,y);
	
	printf("A soma dos valores é: %i", z);
	
	
}
