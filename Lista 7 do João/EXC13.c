#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome1[50]="Senhor das Moscas", nome2[50]="Labirinto no Escuro";
	
	if(strcmp(nome1, nome2) <0){
		
		printf("%s \n%s \n\n", nome1,nome2);
		
	}else if(strcmp(nome1, nome2) >0){
		
		printf("%s \n%s \n\n ", nome2,nome1);
		
	}else{
		
		printf("%s é na mesma ordem de %s", nome1,nome2);
		
	}
	
}
