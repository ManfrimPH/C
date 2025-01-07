#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i,n,somaImpar,numerosImpares;
	float media;
	
	for(i=1;i<=10;i++){
		
		somaImpar=0;
		numerosImpares=0;
		
		
		printf("\nMe fale um número:\n");
		scanf("%i", &n);
		
		if(n % 2 == 0 ){
			
			printf("\nO número é par.\n");
			
		}else{
				
			printf("\nO número é impar.\n");
			
			somaImpar+=n;
			
			numerosImpares+=1;
			
		}
		
		
	}
	
	media=somaImpar/numerosImpares;
	
	printf("A média dos números impars é de:%.1f", media);
	
	
}
