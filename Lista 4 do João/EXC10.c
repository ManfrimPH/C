#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n,n_ma,n_me;
	
	
	n_ma=0;
	
	while(n>=0){
		
		printf("Me fale um n�mero:\n");
		scanf("%i", &n);
		
		if(n>n_ma && n>0){
			
			n_ma=n;
			
		}
		
		if(n<n_me && n>0){
			
			n_me=n;
			
		}
		
	}
	
	printf("\nO valor menor �:%i\n", n_me);
	printf("O valor maior �:%i\n", n_ma);
	
}
