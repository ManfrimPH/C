#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	
	int n1,n2;
	char calculo;
    
    printf("Me fala um n�mero:");
    scanf("%i", &n1);
    
    printf("Me fala um outro n�mero:");
    scanf("%i", &n2);
    
    printf("Voc� quer fazer qual tipo de conta com esses n�meros?(+,-,*,/)\n");
    scanf(" %c", &calculo);
	
	if (calculo=='+'){
	  printf("\nSua soma deu %i", n1+n2);	
	}
	
    if (calculo=='-'){
    	printf("\nSua subtra��o deu %i", n1-n2);
	}
	
	if (calculo=='*'){
		printf("\nSua multiplica��o deu %i", n1*n2);
	}
	
	if (calculo=='/'){
		printf("\nSua divis�o deu %i", n1/n2);
	}
}
