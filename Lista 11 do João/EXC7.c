#include <stdio.h>
#include <locale.h>
#include <string.h>


primo(a){
	
	int i,cont=0;
	
	for(i=1;i<=a;i++){
		
		if(a % i == 0){
			
			cont+=1;
			
		}	
		
	}
	
	if(cont == 2){
		
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
	
	if(primo(n1) == 1){
		
		printf("%i � primo", n1);
		
	}else{
		
		printf("%i n�o � primo", n1);
		
	}
	
}
