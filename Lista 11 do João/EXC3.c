#include <stdio.h>
#include <locale.h>
#include <string.h>


conta(a,b){
	
	int area;
	
	area = a * b;
	
	return (area);
	
}


main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x,y;
	
	printf("Digite o comprimento: ");
	scanf("%i", &x);
	
	printf("Digite a largura: ");
	scanf("%i", &y);
	
	printf("A area �: %i", conta(x,y));
	
}
