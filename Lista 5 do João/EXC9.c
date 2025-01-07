#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");

	int i;

	for(i=5;i<=49;i+=2){
		
		printf("%i ", i);
		
	}

	
}



