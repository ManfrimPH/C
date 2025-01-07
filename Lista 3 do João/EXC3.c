#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");

	int d,n50,n20,n10,n5,d1,n;

	printf("Quanto você deseja retirar da sua conta?");
	scanf("%i", &d);
	
	d1=d;

		
	if(d>50){
		 
		 n50=(int)d/50;
		 d=d%50;
		 n+=n50;
	}
		
	
	if(d>=20 && d<50){
	
		 n20=(int)d/20;
		 d=d%20;
		 n+=n20;
		 
	}
	
	if(d>=10 && d<20){
		 
		 n10=(int)d/10;
		 d=d%10;
		 n+=n10;
		 
	}
		
	if(d>=5 && d<10){
		
		 
		 n5=(int)d/5;
		 d=d%5;
		 n+=n5;	
	 	 
	}
	
	switch(n){
	
	
	case 0 ... 100:
		
		printf("\nVocê gastou\n%i notas de 50\n%i notas de 20\n%i notas de 10\n%i notas de 5\n", n50,n20,n10,n5);
		printf("\nVocê consegue retirar %i", d1-d);
		
	
	default:
		
		printf("\nNão temos notas o suficiente para você retirar %i", d1);
		break;
	
	}
	
}
