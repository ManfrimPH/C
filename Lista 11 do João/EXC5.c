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
	
	printf("Digite o n�mero: ");
	scanf("%i", &n1);
	
	if(parImpar(n1) == 1){
		
		printf("%i � par", n1);
		
	}else{
		
		printf("%i � impar", n1);
		
	}



}
