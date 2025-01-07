#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i,n,vetor[10],contador=0;
	
	for(i=0;i<10;i++){
		
		printf("Digite um número: \n");
		scanf(" %i", &vetor[i]);
			
	}
	
	i=0;
	
	printf("Qual número você quer procurar?\n");
	scanf(" %i", &n);
	
	for(i=0;i<10;i++){
		
		if(n==vetor[i]){
			
			contador+=1;
			
		}
	
	}
	
	printf("O valor apareceu %i vez(es))", contador);
	
}
