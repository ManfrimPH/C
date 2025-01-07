#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char frase[50],letra;
	int j=0,carac,quantidadeConsoantes=0,i;
	
	
	printf("Me fale uma frase:\n");
	gets(frase);
	
	carac=strlen(frase);
	
	for(i=1;i<=carac;i++){
		
		letra = frase[j];
		
		if(letra!='A' && letra!='E' && letra!='I' && letra!='O' && letra!='U' && letra!='a' && letra!='e' && letra!='i' && letra!='o' && letra!='u' && letra!=' '){
			
			quantidadeConsoantes++;
			
		}
		
		j++;
	}
	
	printf("\nNa frase - %s - temos %i consoantes", frase, quantidadeConsoantes);
	
	
	
}
