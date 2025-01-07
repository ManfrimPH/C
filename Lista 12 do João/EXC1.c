#include <stdio.h>
#include <locale.h>
#include <string.h>

int mdc(int a,int b){
	
	int r,valorMenor,i;
	
	if(a>=b){
		
		valorMenor=b;
		
	}else {
		
		valorMenor=a;
		
	}
	
	
	
	for(i=1;i<valorMenor;i++){
		
		if(a%i==0 && b%i==0){
			
			r=i;
			
		}
		
		
	}
	   
   return r;
	
}



main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1,n2;
	
	printf("Digite o primeiro valor: \n");
	scanf("%i", &n1);
	
	printf("Digite o segundo valor: \n");
	scanf("%i", &n2);
	
	printf("O MDC é: %d", mdc(n1,n2));
	
}
