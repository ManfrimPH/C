#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	
	int i, t1=0, t2=1, proxtermo;
	
	printf(" Serie de Fibonacci\n");
	
	for(i=1; i<=10;i++){
		printf("\n%i\n", t1);
		proxtermo=t1+t2;
		t1=t2;
		t2=proxtermo;
		
	}
}
