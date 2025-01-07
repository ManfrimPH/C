#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <string.h>

char inverter(char a[]){
	
	int comp,i;
	
	char n[50];
	
	comp = strlen(a);
	
	strcpy(n, "");
	
	for(i=comp;i>=0;i--){
		
		strcat(n, a[i]);
		
	}
	
	return(n);
	
}

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char n1[50];
	
	printf("Digite o número: ");
	gets(n1);
	
	printf("%s", inverter(n1));
	
	
	
	
}
