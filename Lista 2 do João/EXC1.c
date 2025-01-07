#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char  nome[50];
	float salario;
	
    printf("Qual o seu nome?\n");
    scanf(" %s", &nome);
	
	printf("%s, quanto você ganha por mês?\n", nome);
	scanf(" %f", &salario);
	
	printf("\n%s, seu novo salario com almento de 28,5%% é de %.2f", nome, salario*1.285);
	
}
