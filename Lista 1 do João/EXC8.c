#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	
	int i, n, r;
	
	printf("Qual sera o valor?");
	scanf("%i", &n);

	for (i=n; i>0; i--){
		
		r*=i;
    }
	
	printf("\nSeu fatorial é:%i", r);
}
