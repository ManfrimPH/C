#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i,n,vetor[10],posicao, contador;
	
	for(i=0;i<10;i++){
		
		printf("Digite um n�mero: \n");
		scanf(" %i", &vetor[i]);
			
	}
	
	i=0;
	
	printf("Qual n�mero voc� quer procurar?\n");
	scanf(" %i", &n);
	
	do{
		
		if(n==vetor[i]){
			
			posicao=i;
			
			contador=1;
			
		}
		
		i+=1;
		
	
	}while(contador!=1);
	
	printf("O n�mero %i est� na posi��o %i do vetor.", n, posicao);
	
}
