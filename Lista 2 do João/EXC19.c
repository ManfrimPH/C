#include<stdio.h>
#include<locale.h>
#include<conio.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50],profissao[50];
	float salario;
	int idade;
	
	printf("Qual o seu nome?\n");
	gets(nome);
	
	printf("%s, quantos anos voc� tem ?\n", nome);
	scanf(" %i", &idade);
	
	printf("%s, qual � o seu trabalho?\n", nome);
	scanf("%s",profissao);
	
	printf("%s, qual � o seu salario?\n", nome);
	scanf("%f", &salario);
	
	printf("Seu nome � %s, voc� tem %i anos de idade, sua profiss�o � %s e seu salario com desconto de 1,3 �: %.2f", nome, idade, profissao, salario*0.987);
	
	
	
	
	
	
}
