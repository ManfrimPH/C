#include <stdio.h>
#include <locale.h>
#include <string.h>

float volume(float r1){
	
	return (1.3333333333*3.14*(r1,r1,r1));
	
}


main(){
	setlocale(LC_ALL, "Portuguese");
	
	float r;
	
	printf("Digite o raio da esfera: ");
	scanf("%f", &r);
	
	printf("O volume da esfera é: %.2f", volume(r));
		
}
