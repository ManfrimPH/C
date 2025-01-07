#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome1[50]="Labirinto no Escuro",nome2[50]= "Senhor das Moscas";
	
	if(strncmp(nome1, nome2, 4) <0){
		
	printf("- %s - vem antes de - %s -, considerando somente os 4 primeiros caracteres", nome1,nome2);
		
	}else if(strncmp(nome2, nome1, 4) <0){
		
		printf("- %s - vem antes de - %s -, considerando somente os 4 primeiros caracteres", nome2,nome1);
		
	}else{
		
		printf("- %s - é na mesma ordem de - %s -, considerando somente os 4 primeiros caracteres", nome1,nome2);
		
	}
	
	
	
}
