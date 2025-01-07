#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x,n,c;
	
	srand(time(NULL));
	
	x=rand() % 10;
	
	
	printf("O sistema escolheu um número aleatório, você tem 2 chances pra acertar.\n");
	
	c=1;
	
	do{
		
		printf("Fale um número de 1 a 10(Você tem %i de chances):\n", c+1);
		scanf("%i", &n);
		
		if(n==x){
			c=0;
		}
		
		
		c--;
		
	}while(c>=0);
	
	
	if(n==x){
		
		printf("Parabéns, você conseguiu.");
		
	}else{
	
	printf("Que pena, você não conseguiu.");
	
	}
}
