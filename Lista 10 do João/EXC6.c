#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i,x,matriz[4][4];
	
	for(i=0;i<4;i++){
		
		for(x=0;x<4;x++){
			
			printf("Digite o número %i,%i da matriz:\n", i,x);
			scanf("%i", &matriz[i][x]);
			
		}
		
	}
	
	system("cls");
	
	for(i=0;i<4;i++){
		
		printf("%i\n", matriz[i][i]);
		
	}
		
}
