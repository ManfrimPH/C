#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i,x,matriz[3][3],cont;
	
	for(i=0;i<3;i++){
		
		for(x=0;x<3;x++){
			
			printf("Digite o número %i,%i da matriz:\n", i,x);
			scanf("%i", &matriz[i][x]);
			
		}
		
	}
		
	for(i=0;i<3;i++){
		
		for(x=0;x<3;x++){
			
			if(matriz[i][x]==matriz[x][i]){
				
				cont+=1;
				
			}
			
		}
		
	}
	
	system("cls");
		
	if(cont==9){
		
		printf("A matriz é simétrica");
		
	}else{
		
		printf("A matriz não é simétrica");
	}
	
	
}
