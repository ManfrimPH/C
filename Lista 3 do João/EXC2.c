#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");

	int operacao;
  	float celsius,fahrenheit,resposta1,resposta2;


	printf("Qual conver��o voc� quer faze?\n 1-De Celsius para Fahrenheit\n 2-De Fahrenheit para Celsius\n");
	scanf(" %i", &operacao);
	
	switch(operacao){
	
	
	case 1:
		
		printf("Qual � a temperatura em Celsius?\n");
	 	scanf(" %f", &celsius);
	 	
	 	resposta1=(celsius*1.8+32);
	 	
	 	printf("%.1f� celsius em fahrenheit �:%.1f�\n", celsius,resposta1);

		break;
		
	case 2:

		printf("Qual � a temperatura em Fahrenheit?\n");
		scanf(" %f", &fahrenheit);
		
		
		resposta2=(fahrenheit-32)*0.555;
		
		printf("%.1f� fahrenheit em celsius �:%.1f�\n", fahrenheit,resposta2);
	
		break;
	
	default:
		
		printf("Opera��o n�o encontrada.");
		
		break;	
	
	}
	
}
