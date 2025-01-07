#include <stdio.h>
#include <locale.h>
#include <string.h>

//Todas as letras "A" serão modificadas por "@"

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char frase[50],letra;
	int j=0,carac,i;
	
	
	printf("Me fale uma frase:\n");
	gets(frase);
	
	carac=strlen(frase);
	
	for(i=1;i<=carac;i++){
		
		letra = frase[j];
		
		if(letra=='A' || letra=='a'){
		
		frase[j]='@';
			
		}
		
		j++;
	}
	
	printf("\n%s\n", frase);
	
	
}
