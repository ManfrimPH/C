#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

main(){
	setlocale(LC_ALL, "portuguese");
	
	int n;
	
	printf("Me fale um n�mero:");
	scanf("%i", &n);
	
	if(n>0){
		printf("O valor � positivo");
	}	
      else if(n<0){
		printf("O valor � negativo");
		}
	    else{
		
	      printf("O resultado � igual a zero");	
		}
}  

