#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x,n,c;
	
	srand(time(NULL));
	
	x=rand() % 10;
	
	
	printf("O sistema escolheu um n�mero aleat�rio, voc� tem 2 chances pra acertar.\n");
	
	c=1;
	
	do{
		
		printf("Fale um n�mero de 1 a 10(Voc� tem %i de chances):\n", c+1);
		scanf("%i", &n);
		
		if(n==x){
			c=0;
		}
		
		
		c--;
		
	}while(c>=0);
	
	
	if(n==x){
		
		printf("Parab�ns, voc� conseguiu.");
		
	}else{
	
	printf("Que pena, voc� n�o conseguiu.");
	
	}
}
