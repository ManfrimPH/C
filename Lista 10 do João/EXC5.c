#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i,x,matriz1[10][10], matriz2[10][10], matriz3[10][10];
	
	for(i=0;i<10;i++){
		
		for(x=0;x<10;x++){
			
			printf("Digite o número %i,%i da 1º matriz:\n",i,x);
			scanf("%i", &matriz1[i][x]);
			
			printf("Digite o número %i,%i da 2º matriz:\n",i,x);
			scanf("%i", &matriz2[i][x]);
			
			matriz3[i][x]=matriz1[i][x]*matriz2[i][x];
			
		}
		
	}
	
	system("cls");
	
	for(i=0;i<10;i++){
		
		for(x=0;x<10;x++){
			
			printf("%i ", matriz3[i][x]);
			
		}
		
		printf("\n");
		
	}
	
}
