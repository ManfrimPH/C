#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i,n,somaImpar,numerosImpares;
	float media;
	
	for(i=1;i<=10;i++){
		
		somaImpar=0;
		numerosImpares=0;
		
		
		printf("\nMe fale um n�mero:\n");
		scanf("%i", &n);
		
		if(n % 2 == 0 ){
			
			printf("\nO n�mero � par.\n");
			
		}else{
				
			printf("\nO n�mero � impar.\n");
			
			somaImpar+=n;
			
			numerosImpares+=1;
			
		}
		
		
	}
	
	media=somaImpar/numerosImpares;
	
	printf("A m�dia dos n�meros impars � de:%.1f", media);
	
	
}
