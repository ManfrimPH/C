#include <stdio.h>
#include <locale.h>
#include <string.h>


maior(a,b){
	
	if(a>b){
		
		printf("%i é o maior valor", a);
		
		
	}else if(b>a){
		
		printf("%i é o maior valor", b);
		
	}else{
		
		printf("Os dois números são iguais");
		
	}
	
	return 0;
	
}




main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1,n2;
	
	printf("Digite um número: ");
	scanf("%i", &n1);
	
	printf("Digite outro número: ");
	scanf("%i", &n2);
	
	maior(n1,n2);
	
}
