#include <stdio.h>
#include <locale.h>
#include <string.h>


fatorial(a){
	
	if(a == 0){
		
		return 1;
		
	}else{
		
		return (a*fatorial(a-1));
		
	}
	
}


main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1;
	
	printf("Digite o n�mero: ");
	scanf("%i", &n1);
	
	printf("O fatorial de %i �: %i", n1,fatorial(n1));
	
}
