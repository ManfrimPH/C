#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

main(){
	setlocale(LC_ALL, "portuguese");
	
	int n;
	
	printf("Me fale um número:");
	scanf("%i", &n);
	
	if(n>0){
		printf("O valor é positivo");
	}	
      else if(n<0){
		printf("O valor é negativo");
		}
	    else{
		
	      printf("O resultado é igual a zero");	
		}
}  

