#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	
	for(i=0;i<=10;i++){
	
	printf("7*%i=%i\n", i, i*7);
	
	}
	
	
}
