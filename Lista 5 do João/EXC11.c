#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50],sexo,continuar;
	float somaIdade;
	int idade,quantidadeMulheres;
	
	
	somaIdade=0;
	quantidadeMulheres=0;
	
	do{
		printf("Qual o seu nome?\n");
		scanf(" %s", &nome);
	
		printf("Quantos anos você tem?\n");
		scanf(" %i", &idade);
	
		do{
		
			printf("Qual o seu sexo?(F-M)\n");
			scanf(" %c", &sexo);
		
		}while(sexo!='F' && sexo!='M');
		
		if(sexo='F'){
			
			somaIdade+=idade;
			quantidadeMulheres+=1;
			
		}
		
		
		printf("Você deseja inserir mais dados(S-N)?\n");
		scanf(" %c", &continuar);
		
		system("cls");
		
	}while(continuar!='N');
	
	printf("A média da idade das mulheres é de: %.2f", somaIdade/quantidadeMulheres);
	
	
	
}
