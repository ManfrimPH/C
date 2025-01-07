#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vetor1[10]={1,2,3,4,5,6,7,8,9,0},vetor2[10]={0,9,8,7,6,5,4,3,2,1},i,soma,vetor3[10];
	
	for(i=0;i<10;i++){
		
		vetor3[i]=i+(i+1);
	
	}
	
	i=0;
	
	for(i=0;i<10;i++){
		
		printf("%i - ", vetor1[i]);
		
		
	}
	
	printf("\n\n");
	
	i=0;
	
	for(i=0;i<10;i++){
		
		printf("%i - ", vetor2[i]);
		
		
	}
	
	printf("\n\n");
	
	i=0;
	
	for(i=0;i<10;i++){
		
		printf("%i - ", vetor3[i]);
		
		
	}
	
	
}
