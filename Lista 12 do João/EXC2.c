#include <stdio.h>
#include <locale.h>
#include <string.h>

char frase[100],fraseSemEspaco[100],invertido[100];

void verificarPalindromo(){
	
	if(fraseSemEspaco==invertido){
		
		printf("A Frase é um palindromo");
		
	}else{
		
		printf("A frase não é um palindromo");
		
	}
	
	
}

void inverter(){
	
	int cont,i,j;
	
	cont=strlen(fraseSemEspaco);

	for(i=0;i<cont;i++){
		
		invertido[i]=fraseSemEspaco[j];
			
		j-=1;
				
	}
	
}


void tirarEspaco(){
	
	int cont,i,j=0;
	
	cont=strlen(frase);
	
	j=cont-1;
	
	for(i=0;i<cont;i++){
		
		if(frase[i]!=' '){
		
			fraseSemEspaco[j]=frase[i];
			
			j=+1;
			
		}
		
	}

}

main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite uma frase:");
	gets(frase);
	
	tirarEspaco();
	
	inverter();
	
	verificarPalindromo();
	
	
}
