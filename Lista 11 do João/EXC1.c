#include <stdio.h>
#include <locale.h>
#include <string.h>


void apresentar(){
	
	printf("Ol�, Mundo!");
	
}


main(){
	setlocale(LC_ALL, "Portuguese");
	
	apresentar();
		
}
