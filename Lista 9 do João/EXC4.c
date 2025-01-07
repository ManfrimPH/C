#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i,valorMenor=9999999,valorMaior=0,vetor[10];
	
	for(i=0;i<10;i++){
		
		printf("Digite um número: ");
		scanf("%i", &vetor[i]);
		
		if(vetor[i]>valorMaior){
			
			valorMaior=vetor[i];	
			
		
		}
		
		if(vetor[i]<valorMenor){
		
			valorMenor=vetor[i];
		
		}	
	}
	
	printf("%i <- valor menor || %i <- valor maior", valorMenor, valorMaior);
	
}
