#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");

	int n;
	float n1,n2;
	
	printf("Me fale o primeiro n�mero:\n");
	scanf(" %f", &n1);
	
	printf("Me fale o segundo n�mero:\n");
	scanf(" %f", &n2);
	
	printf("Qual opera��o l�gica voc� quer fazer?\n 1-Soma\n 2-Subtra��o\n 3-Multiplica��o\n 4-Divis�o\n");
	scanf(" %i", &n);
	
	switch(n){
		
		case 1:
			
			printf("A soma dos dois valores �:%.2f", n1+n2);
			break;
		
		case 2:
			
			printf("A subtra��o dos dois valores �:%.2f", n1-n2);
			break;
			
		case 3:
			
			printf("A multiplica��o dos dois valores �:%.2f", n1*n2);
			break;
			
		case 4:
			
			printf("A divis�o dos dois valores �:%.2f", n1/n2);
			break;
			
			
	}
	
	
	
	

		
}
