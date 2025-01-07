#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	char vetor[50] [10];
	
	for(i=0;i<10;i++){
		
		printf("Me fale um caracter: \n");
		gets(vetor[i]);
		
	} 
	
	system("cls");
	
	i=0;
	
	for(i=0;i<10;i++){
		
		printf(" %s\n", vetor[i]);
		
	}
	
	
	
}
