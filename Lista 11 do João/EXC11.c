#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>


float distancia(float x1,float y1,float x2,float y2){
	
	return(sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
	
}


main(){
	setlocale(LC_ALL, "Portuguese");
	
	float x1,x2,y1,y2;
	
	printf("Digite o X da primeira cordenada: ");
	scanf("%f", &x1);
	
	printf("Digite o y da primeira cordenada: ");
	scanf("%f", &y1);
	
	printf("Digite o X da segunda cordenada: ");
	scanf("%f", &x2);
	
	printf("Digite o y da segunda cordenada: ");
	scanf("%f", &y2);
	
	printf("A distancia entre as duas cordenadas é: %.2f",distancia(x1,y1,x2,y2));
	
	
}
