#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i,x,matriz[3][3];
	
	for(i=0;i<3;i++){
		
		for(x=0;x<3;x++){
			
			printf("Digite o número %i,%i da matriz:\n", i,x);
			scanf("%i", &matriz[i][x]);
			
		}
		
	}
	
	system("cls");
		
	for(i=0;i<3;i++){
		
		for(x=0;x<3;x++){
			
			printf("%i ", matriz[x][i]);
			
		}
	
		printf("\n");
		
	}
		
}
