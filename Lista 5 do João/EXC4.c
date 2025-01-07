#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	
	for(i=5;i<=20;i++){
		
		printf("%i\n", i);
		
	}
	
	
}
