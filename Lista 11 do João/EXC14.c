#include <stdio.h>
#include <locale.h>
#include <string.h>


int quantidade(char a[], char b){
	
	int cont=0,i;
	
	
	for(i=0;i<=strlen(a);i++){
		
		if(a[i] == b ){
			
			cont+=1;
			
		}
		
	}
	
	return cont;
	
}


main(){
	setlocale(LC_ALL, "Portuguese");
	
	char n1[50],n2;
	
	printf("Digite um n�mero: ");
	scanf(" %s", &n1);
	
	printf("Digite o digito que voc� quer ver: ");
	scanf(" %c", &n2);
	
	printf("O n�mero aparece %i vezes",quantidade(n1,n2));
		
	
}
