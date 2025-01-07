#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1,n2;
	
	printf("Me fale um número:\n");
	scanf(" %f", &n1);
	
	printf("Me fale um outro número:\n");
	scanf(" %f", &n2);
	
	printf("A soma desses dois valores é: %.2f", n1+n2);
}
