#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n,i,soma;
	float media;
	
	
	for(i=1;i<=15;i++){
		
		do{
			
			printf("Me fale um n�mero entre 10 e 50:\n");
			scanf(" %i", &n);
			
		}while(n<10 || n>50);
		
		soma+=n;
		
	}
	
	media=soma/15;
	
	printf("A m�dia dos n�meros �:%.1f", media);
	
		
}
