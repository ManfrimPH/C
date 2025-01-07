#include<stdio.h>
#include<locale.h>

main(){
	float c,f;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Qual é a temperatura em celsius?");
	scanf("%f", &c);
	
	f=(c*9/5)+32;
	
	printf("Sua temperatura em Fahrenheit é:%.2f", f);
}
