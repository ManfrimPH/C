#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome1[50]="Robert Downey Jr.", nome2[50]="Christopher Hemsworth";
	
	if(strcmp(nome1, nome2) <0){
		
		printf("%s vem antes de %s", nome1,nome2);
		
	}else if(strcmp(nome1, nome2) >0){
		
		printf("%s vem antes de %s", nome2,nome1);
		
	}else{
		
		printf("%s é na mesma ordem de %s", nome1,nome2);
		
	}
	
	
	
}
