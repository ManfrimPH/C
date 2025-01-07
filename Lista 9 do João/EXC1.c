#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i,vetor[10];
	
	for(i=0;i<10;i++){
		
		printf("Digite um número: \n");
		scanf(" %i", &vetor[i]);
			
	}
	
	system("cls");
	
	i=0;
	
	for(i=0;i<10;i++){
		
		printf("%i\n", vetor[i]);
		
	}
	
	
}
