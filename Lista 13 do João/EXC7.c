#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	
	FILE *arquivo;
	arquivo = fopen("separado.txt", "r");
	
	if(arquivo == NULL){
		
		printf("Arquivo não encontrado");
		
	}else{
		
		int soma=0,cont=0,n;
		
		float media;
		
		while(fscanf(arquivo,"%i", &n)){
			
			if(n!=","){
				
				soma+=n;
				
				cont+=1;
				
			}
			
		}	
		
		media = soma/cont;
		
		printf("%.1f", media);
		
	}
	
	fclose(arquivo);
		
	
}
