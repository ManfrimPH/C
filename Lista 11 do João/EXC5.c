#include <stdio.h>
#include <locale.h>
#include <string.h>


parImpar(a){
	
	if(a % 2 == 0){
		
		return 1;
		
	}else{
		
		return 0;
		
	}
	
	
}


main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1;
	
	printf("Digite o número: ");
	scanf("%i", &n1);
	
	if(parImpar(n1) == 1){
		
		printf("%i é par", n1);
		
	}else{
		
		printf("%i é impar", n1);
		
	}



}
