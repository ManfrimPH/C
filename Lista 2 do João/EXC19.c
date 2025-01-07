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
	
	printf("%s, quantos anos você tem ?\n", nome);
	scanf(" %i", &idade);
	
	printf("%s, qual é o seu trabalho?\n", nome);
	scanf("%s",profissao);
	
	printf("%s, qual é o seu salario?\n", nome);
	scanf("%f", &salario);
	
	printf("Seu nome é %s, você tem %i anos de idade, sua profissão é %s e seu salario com desconto de 1,3 é: %.2f", nome, idade, profissao, salario*0.987);
	
	
	
	
	
	
}
