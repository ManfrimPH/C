#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Me fale a quantidade de números que você vai digitar: \n");
	scanf(" %i", &n);
	
	int i, vetor[n], soma=0;
	
	
	for(i=0;i<n;i++){
		
		printf("Me fale o %iº número: \n", i + 1);
		scanf(" %i", &vetor[i]);
		
		soma+=vetor[i];
		
	}
	
	system("cls");
		
		printf("%i\n", soma);
		
}
