#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char biblioteca[50]="string.h";
	
	printf("%i\n", strlen(biblioteca));
	
	strcat(biblioteca, "- A Casa do Saber");
	
	printf("%s", biblioteca);
	
	
}
