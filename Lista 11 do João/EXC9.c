#include <stdio.h>
#include <locale.h>
#include <string.h>


float temp(float a){
	
	return((a*9/5)+32);
		
	
}


main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1;

	printf("Digite a temperatura em Celsius: ");
	scanf("%f", &n1);
	
		
	printf("%.2f é %.2f", n1,temp(n1));

	
}
