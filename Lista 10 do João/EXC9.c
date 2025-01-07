#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i,x,matriz[4][4],valorMaior,p1,p2;
	
	for(i=0;i<4;i++){
		
		for(x=0;x<4;x++){
			
			printf("Digite o número %i,%i da matriz:\n", i,x);
			scanf("%i", &matriz[i][x]);

			if(valorMaior<matriz[i][x]){
				
				valorMaior=matriz[i][x];
				
				p1=i;
				
				p2=x;
				
			}
			
		}
		
	}
	
	printf("O valor maior é %i, na posição %i,%i do vetor", matriz[p1][p2],p1,p2);
		
	
}
