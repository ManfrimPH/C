#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n,i,p;
	
	p=0;
	
	printf("Me fale um n�mero:\n");
	scanf("%i", &n);
	
	for(i=1;i<=n;i++){
		
		if(n % i == 0){
			
			p+=1;
			
		}
		
	}

	if(p>0 && p<=2){
		
		printf("O n�mero � primo");
		
	}

	if(p>2){
		
		printf("O n�mero n�o � primo");
	}
}
