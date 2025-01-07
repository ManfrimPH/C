#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[10],i,soma=0;
	
	for(i=0;i<10;i++){
		
		printf("Digite um número: \n");
		scanf(" %i", &vetor[i]);
	
	soma+=vetor[i];
	
	}
	
	printf("%i", soma);
	
	
	
	
	
}
