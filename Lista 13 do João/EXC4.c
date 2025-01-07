#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	
	FILE *arquivo;
	arquivo = fopen("numeros.txt", "w+");
	
	if(arquivo == NULL){
		
		printf("Arquivo não encontrado");
		
	}else{
		
		int i;
		
		for(i=1;i<=10;i++){
			
			fprintf(arquivo ,"%i\n", i);
			
		}
		
	}
	
	fclose(arquivo);
		

	
}
