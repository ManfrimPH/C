#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"portuguese");
	
	int i, n, ma ,me;
	
	printf("De quantos n�meros vai ter a sequ�ncia?");
	scanf("%i", &n);
	
	int seq[n];
	
	for(i=0; i<n; i++){
		printf("%i� numero: ", i+1);
		scanf("%i", &seq[i]);
	}
	
	printf("\n\nNa sequencia de %i n�meros �:\n\n", n);
	
	for(i=0; i<n ; i++){
		printf(" %i", seq[i]);
	}
	
	ma=seq[0];
	
	for(i=1; i<n; i++){
		if(ma<=seq[i]){
			ma=seq[i];
		}
	}
	
    me=seq[0];
    
    for(i=1; i<n; i++){
    	if(me>=seq[i]){
    		me=seq[i]; 
		}
	}
	
	
	printf("\n\nO maior valor �:%i", ma);
	printf("\n\nO menor valor �:%i", me);
}
