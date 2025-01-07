#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");

	char nome[50],nomeVelho[50]="",nomeNovo[50]="";
	int idade,idadeMaior,idadeMenor,i;
	
	idadeMenor=100;
	idadeMaior=0;
	
	
	
	
	for(i=1;i<=5;i++){
	
		printf("Me fale o seu nome completo:\n");
		gets(nome);
		
		printf("Quantos anos você tem?\n");
		scanf(" %i", &idade);
		getchar();
		
		if(idade>idadeMaior){
			
			strcpy(nomeVelho, nome);
			
			idadeMaior=idade;
			
		}else if(idade<idadeMenor){
			
			strcpy(nomeNovo, nome);
			
			idadeMenor=idade;
		}	
	}
	
	system("cls");
	
	printf("O nome da pessoa mais velha é:%s\n", nomeVelho);
	printf("O nome da pessoa mais nova é:%s", nomeNovo);

}
