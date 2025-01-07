#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char frase[50],letra;
	int j=0,carac,i,qual;
	
	do{
	
	printf("Você quer transformar a frase:\n1-Maiusculo\n2-Minusculo\n");
	scanf(" %i", &qual);
	getchar();
	
	}while(qual!=1 && qual!=2);
	
	printf("\nMe fale uma frase:\n");
	gets(frase);
	
	carac=strlen(frase);
	
	for(i=1;i<=carac;i++){
		
		if(qual==1){
			
			letra = frase[j];
		
			frase[j]=toupper(frase[j]);
			
		}else{
			
			letra = frase[j];
			
			frase[j] = tolower(frase[j]);
		
		}
		
		j++;
	}
	
	if(qual==1){
	
		printf("\nEm maiusculo - %s -", frase);
	
	}else{
		
		printf("\nEm minusculo - %s -", frase);
		
	}
	
}
