#include <stdio.h>
#include <locale.h>
#include <string.h>

int quant;

float mediaAritimetica(float vet[quant]){
	
	int i;
	
	float soma;
	
	for(i=0;i<quant;i++){
		
		soma+=(1/vet[i]);
		
	}	
	
	printf("%f", soma);
	
	return (i/soma);
	
}

main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o tamanho do vetor: ");
	scanf("%i", &quant);
	
	int i;
	
	float vet[quant];
	
	for(i=0;i<quant;i++){
	
		printf("Digite o %iº valor:", i+1);
		scanf("%f", &vet[i]);
	
	}
	
	printf("A média é: %.2f", mediaAritimetica(vet));
	
}
