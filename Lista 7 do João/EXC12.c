#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome1[200]="Preço do leite sofre baixa", nome2[200]="Brasil compra leite do exterior e faz com que o leite brasileiro sofra baixa no preço.";
	
	
	strcat(nome1, "-");
	
	strcat(nome1, nome2);
	
	printf("%s", nome1);
	
}
