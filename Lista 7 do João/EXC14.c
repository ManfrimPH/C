#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
    char nome1[50]="Luís Dill",sobrenome[50];
    char *ultimoEspaco=strchr(nome1, ' ');
    int tamanhoSobrenome;


        
    tamanhoSobrenome=strlen(ultimoEspaco + 1);

    strncpy(sobrenome, ultimoEspaco+1, tamanhoSobrenome);
    sobrenome[tamanhoSobrenome] = '\0';

    printf("Sobrenome: %s\n", sobrenome);
    

}
	
