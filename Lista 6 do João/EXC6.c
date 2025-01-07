#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int carac,i;
	char frase[50];
	
	
	printf("Me fale uma frase:\n");
	gets(frase);
	
	carac=strlen(frase)-1;
	
	for(i=1;i<=strlen(frase);i++){
		
		printf("%c", frase[carac]);
		
		carac--;
	}
	
	
	
	
	
}
