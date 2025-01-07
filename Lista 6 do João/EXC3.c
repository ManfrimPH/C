#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char frase[50];
	int caracteres,i = 0, j = 0,caracteresSemEspaco=0;
	
	
	printf("Me fale uma frase ou palavra:\n");
	gets(frase);
	
	caracteres=strlen(frase)-1;
	
	for(i=0;i<strlen(frase);i++){
		
		if(frase[i]!=' '){
				
			if(frase[caracteres]==frase[i]){
				
				j++;	
					
			}
		
		caracteresSemEspaco++;
		
		}
		
		caracteres--;

	}
	
	if(j==caracteresSemEspaco){
		printf("É um palíndromo!");
	} else {
		printf("Não é um palíndromo");
	}
	
	
	
	
}
