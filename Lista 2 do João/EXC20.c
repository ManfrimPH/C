#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1,n2,n3,n4,n5,t;
	
	printf("Me fale o primeiro n�mero:\n");
	scanf(" %f", &n1);
	
	printf("Me fale o segundo n�mero:\n");
	scanf(" %f", &n2);
	
	printf("Me fale o terceiro n�mero:\n");
	scanf(" %f", &n3);
	
	printf("Me fale o quarto n�mero:\n");
	scanf(" %f", &n4);
	
	printf("Me fale o quinto n�mero:\n");
	scanf(" %f", &n5);
	
	t=(n1*2+n2*4+n3*2+n4*5+n5*3)/16;
	
	printf("\nA m�dia ponderada dos 5 n�meros �: %.2f", t);




	
}
