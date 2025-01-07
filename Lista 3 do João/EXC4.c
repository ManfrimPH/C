#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");

	int n,a;

	printf("Me fale um numero inteiro\n");
	scanf("%i", &n);
	
	a=n%2;

	switch(a){
		
		case 0:
		
		printf("Seu número é par.");	
		break;
	
		case 1:
		
		printf("Seu número é impar");	
		break;
	
	}	
}
