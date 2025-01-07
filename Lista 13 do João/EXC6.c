#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char file[50];
	
	printf("Digite o nome do arquivo:(arquivo.txt)");
	scanf("%s", file);
	
	FILE *arquivo;
	arquivo = fopen(file, "r");
	
	if(arquivo == NULL){
		
		printf("Arquivo não encontrado");
		
	}else{
		
		char frase[50];
		
		int cont;
		
		while(fgets(frase,sizeof(frase),arquivo)!=NULL){
			
			printf("%s", frase);
			
			cont+=1;
			
		}
		
		printf("\n\n%i", cont);
		
	}
	
	fclose(arquivo);
		
	
}
