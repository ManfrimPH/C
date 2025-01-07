#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"portuguese");
	
	int i;
	
	for (i=2; i<=100; i+=2){
		printf("  %i", i);
	}
}
