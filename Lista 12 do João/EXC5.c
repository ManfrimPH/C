#include <stdio.h>
#include <locale.h>
#include <string.h>

int vet[15],i;

int maiorValor(int numeroMaior, int n){
	
	if(i>=15){
		
		return(numeroMaior);
		
	}

	if(numeroMaior<n){
		
		i+=1;	
		
		maiorValor(n,vet[i]);
		
	}else if(numeroMaior>=n){
		
		i+=1;	
		
		maiorValor(numeroMaior,vet[i]);
		
	}	
	
}


main(){
	setlocale(LC_ALL, "Portuguese");
	
	for(i=0;i<15;i++){
	
		printf("Digite o %i� valor:", i+1);
		scanf("%i", &vet[i]);
	
	}
	
	i=1;
	
	printf("O maior valor �: %d",maiorValor(vet[0],vet[1]));
	
}
