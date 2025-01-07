#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	
	int n1,n2;
	char calculo;
    
    printf("Me fala um número:");
    scanf("%i", &n1);
    
    printf("Me fala um outro número:");
    scanf("%i", &n2);
    
    printf("Você quer fazer qual tipo de conta com esses números?(+,-,*,/)\n");
    scanf(" %c", &calculo);
	
	if (calculo=='+'){
	  printf("\nSua soma deu %i", n1+n2);	
	}
	
    if (calculo=='-'){
    	printf("\nSua subtração deu %i", n1-n2);
	}
	
	if (calculo=='*'){
		printf("\nSua multiplicação deu %i", n1*n2);
	}
	
	if (calculo=='/'){
		printf("\nSua divisão deu %i", n1/n2);
	}
}
