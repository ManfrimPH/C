#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i,soma;
	
	i=0;
	
	while (i<=100){
		
		soma+=i;
		i++;
	}
	
	printf("A soma é %i", soma);
	
	
	
	
}
