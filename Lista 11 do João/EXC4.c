#include <stdio.h>
#include <locale.h>
#include <string.h>


maior(a,b){
	
	if(a>b){
		
		printf("%i � o maior valor", a);
		
		
	}else if(b>a){
		
		printf("%i � o maior valor", b);
		
	}else{
		
		printf("Os dois n�meros s�o iguais");
		
	}
	
	return 0;
	
}




main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1,n2;
	
	printf("Digite um n�mero: ");
	scanf("%i", &n1);
	
	printf("Digite outro n�mero: ");
	scanf("%i", &n2);
	
	maior(n1,n2);
	
}
