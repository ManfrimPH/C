#include <stdio.h>
#include <locale.h>
#include <windows.h>

main(){
	setlocale(LC_ALL, "Portuguese");

	float n1,n2,n3,media;
	char conceito;





    printf("Qual foi sua nota na primeira prova?(0-10)");
    scanf(" %f", &n1);
    
    printf("Qual foi sua nota na segunda prova?(0-10)");
	scanf(" %f", &n2);
	
	printf("Qual foi sua nota na terceira prova?(0-10)");
	scanf(" %f", &n3);
	
	media=(n1+n2+n3)/3;

	if(media>=0 && media<4){
		
		conceito='E';	
	} else if(media>=4 && media<6){
		
		conceito='D';
	} else if(media>=6 && media<8){
		
		conceito='C';
	} else if(media>=8 && media<9){
		
		conceito='B';
	} else if(media>=9 && media<=10){
		
		conceito='A';
	} else{
		
		printf("Voc� colocou um valor INCORRETO!");
	};
	
	
	switch(conceito){
		
		
		case 'E':
			
			printf("Voc� foi REPROVADO!");
			break;
			
		case 'D':
		
			printf("Voc� foi REPROVADO!");
			break;
			
		case 'C':
		
			printf("Voc� foi APROVADO!");
			break;
			
		case 'B':
			
			printf("Voc� foi APROVADO!");
			break;
			
		case 'A':
			
			printf("Voc� foi APROVADO!");
			break;
				
	}	
		
	system("pause");
	return 0;	
		
}
