#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	srand(time(NULL));
	
	int vet[10],cont,i,x;
	
	for(i=0;i<10;i++){
	
	
		do{
		
			cont=0;
		
			vet[i]=(rand() % 10)+1;
		
			for(x=0;x<i;x++){
				
				if(vet[i]==vet[x])
				
					cont=1;
				
			}
		
		}while(cont==1);
	
	}
	
	
	for(i=0;i<10;i++){
		
		printf("%i\n", vet[i]);
		
	}
	
	return 0;
	
}
