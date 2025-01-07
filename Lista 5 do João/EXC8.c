#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	
	for(i=6;i<=50;i+=2){
		
		printf("%i ", i);
		
	}
	
	
		
}
