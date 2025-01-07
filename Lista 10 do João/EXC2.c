#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	

	char nome[10][2][50];
	int i,x;
	
	for(i=0;i<10;i++){
			
		printf("Digite o nome:\n");
		gets(nome[i][1]);
		
		printf("Digite o sobrenome:\n");
		gets(nome[i][2]);	
			
	}
	
	system("cls");
	
	for(i=0;i<10;i++){
		
		printf("%s ", nome[i][1]);
		printf("%s", nome[i][2]);
		
		printf("\n");
		
	}
	
}
