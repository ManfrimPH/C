#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vetor1[10]={1,2,3,4,5,6,7,8,9,0},vetor2[10]={0,9,8,7,6,5,4,3,2,1},i,j=0,contador=0;
	
	for(i=0;i<10;i++){
		
		if(vetor1[i]==vetor2[j]){
		
		contador+=1;
			
		}
	
		j+=1;	
	
	}
	
	if(contador==10){
		
		printf("Os vetores são iguais");
		
	} else
	
	printf("Os vetores são diferentes");
	
}
