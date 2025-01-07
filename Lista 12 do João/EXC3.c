#include <stdio.h>
#include <locale.h>
#include <string.h>

int quant;

void empurrar(int vet1[quant]){
	
	int n1,i,vet2[quant+10];
	
	do{
	
		printf("Digite quantas casas você quer avançar no vetor:(0-10)");
		scanf("%i", &n1);
	
	}while(n1<0 || n1>10);
	
	for(i=0;i<quant;i++){
		
		vet2[i+n1]=vet1[i];
		
	}
	
	for(i=0;i<quant+10;i++){
		
		printf("%i ", vet2[i]);
		
	}
	
}



main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite a quantidade de valores você vai digitar:");
	scanf("%i", &quant);
	
	int vet[quant],i;
	
	for(i=0;i<quant;i++){
	
		printf("Digite o %iº valor:", i+1);
		scanf("%i", &vet[i]);
	
	}
	
	empurrar(vet);
	
}
