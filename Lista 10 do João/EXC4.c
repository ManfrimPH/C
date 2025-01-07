#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int matriz1[3][3],matriz2[3][3],matriz3[3][3],i,x;
	
	for(i=0;i<3;i++){
		
		for(x=0;x<3;x++){
			
			printf("Digite o valor %i,%i da 1º matriz:\n", i,x);
			scanf("%i", &matriz1[i][x]);
			
			printf("Digite o valor %i,%i da 2º matriz:\n", i,x);
			scanf("%i", &matriz2[i][x]);
			
			matriz3[i][x]=matriz1[i][x]+matriz2[i][x];
			
		}
		
	}
	
	for(i=0;i<3;i++){
		
		for(x=0;x<3;x++){
			
			printf("%i ", matriz3[i][x]);
			
		}
		
		printf("\n");
		
	}
	
	
}
