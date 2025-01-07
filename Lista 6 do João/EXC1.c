#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char n1[50],n2[50];
	
	printf("Me fale uma palavra\n");
	scanf("%s", &n1);
	
	strcpy(n2, n1);
	
	printf("A variavel n2 agora é:%s\n", n2);
	
}
