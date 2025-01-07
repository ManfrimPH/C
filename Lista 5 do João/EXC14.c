#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50],sexo,nomeMenor[50];
	int idade,filhos,i,quantidadeMulheres=0,idadeMenor=0,quantidadeMulheresSemFilhos=0;
	float somaIdadeMulheresSemFilhos=0,quantidadeHomens=0;
	
	
	for(i=1;i<=12;i++){
	
		printf("Qual o seu nome?\n");
		gets(nome);
		
		do{
		
		printf("%s, quantos anos você tem?\n", nome);
		scanf(" %i", &idade);
		getchar();
		
		}while(idade<0 || idade>120);
		
		do{
		
		printf("%s, qual o seu sexo?(F-M)\n", nome);
		scanf(" %c", &sexo);
		getchar();
		
		}while(sexo!='F' && sexo!='M');
		
		printf("%s, quantos filhos você tem?\n", nome);
		scanf(" %i", &filhos);
		getchar();
		
		system("cls");
	
		if(sexo='M'){
			
			quantidadeHomens+=1;
			
		}else{
			
			quantidadeMulheres+=1;
			
			if(filhos=0){
				
				quantidadeMulheresSemFilhos+=1;
				
				somaIdadeMulheresSemFilhos+=idade;
				
			}
			
			
		}
	
		if(idade<idadeMenor){
			
			idadeMenor=idade;
			
			strcpy(nomeMenor, nome);
			
		}
	
	}
	
	printf("A porcentagem de homens é:%.2f%%\n",quantidadeHomens/12*100);
	printf("A média da idade das mulheres é:%.2f\n",somaIdadeMulheresSemFilhos/quantidadeMulheresSemFilhos);
	printf("%s é a pessoas mais jovem, com %i anos", nomeMenor,idadeMenor);
	printf("%i mulheres foram entrevistadas", quantidadeMulheres);
	
	
	
}
