#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");

	int  n1,n2,n3;
	
	printf("Me fale um n�mero:\n");
	scanf("%i", &n1);
	
	printf("Me fale outro numero:\n");
	scanf("%i", &n2);
	
	printf("Me fale outro numero:\n");
	scanf("%i", &n3);

	printf("\nA multiplica��o destes 3 n�meros �: %i", n1*n2*n3);
	
	
}
