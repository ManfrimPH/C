#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vetor1[10]={1,2,3,4,5,6,7,8,9,0},vetor2[10]={0,9,8,7,6,5,4,3,2,1},i,sub;
	
	for(i=0;i<10;i++){
		
		sub=vetor1[i]-vetor2[i];
	
	printf("Soma do %iº valor é: %i\n", i, sub);
		
	}
	
	
	
}
