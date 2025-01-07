#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>


float raiz(float a){
	
	return(sqrt(a));
	
}


main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1;
	
	printf("Digite o número: ");
	scanf("%i", &n1);
	
	printf("A raiz de %i é: %.2f", n1, raiz(n1));
	
}
