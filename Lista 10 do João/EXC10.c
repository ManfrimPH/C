#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int matriz[4][3],soma[4],i,x;
	
	for(i=0;i<4;i++){
		
		for(x=0;x<3;x++){
			
			printf("Digite o número %i,%i da matriz:\n", i,x);
			scanf("%i", &matriz[i][x]);
			
		}
		
		soma[i]=matriz[i][0]+matriz[i][1]+matriz[i][2];
		
	}
			
	system("cls");
	
	for(i=0;i<4;i++){
		
		printf("%i\n", soma[i]);
		
	}
	
}
