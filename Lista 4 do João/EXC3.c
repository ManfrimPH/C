#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	float n,soma,media;
	
	i=1;
	
	do{
		
		printf("Me fale o %i� n�mero:\n", i);
		scanf(" %f", &n);
		
		soma+=n;
		
		i++;
		
	} while (i<=5);
	
	
	media=soma/5;
	
	printf("A sua m�dia �:%.2f", media);
	
	
	
}
