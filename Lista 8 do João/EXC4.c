#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Me fale a quantidade de n�meros que voc� vai digitar: \n");
	scanf(" %i", &n);
	
	do{
		
		if(n<15){
			
			printf("N�o pode ser menor do que 15 :(\n");
			
			printf("Me fale a quantidade de n�meros que voc� vai digitar: \n");
			scanf("%i", &n);
			
		}else {
			
			printf("Quantidade de n�meros valida :)\n");
			
		}
		
		
	}while(n<15);
	
	
	int i, vetor[n];
	
	
	for(i=0;i<n;i++){
		
		printf("Me fale o %i� n�mero: \n", i + 1);
		scanf(" %i", &vetor[i]);
		
	}
	
	system("cls");
	
	vetor[14]=18;
	
	i=0;
	
	for(i=0;i<n;i++){
		
		printf("%i\n", vetor[i]);
		
	}
	
}
