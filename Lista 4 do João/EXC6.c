#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float media,soma,a;
	int	n,i;
	
	printf("Quantos alunos tem na sala?\n");
	scanf("%i", &n);
	
	for(i=1;i<=n;i++){
	
	
		printf("Qual a altura do %i�?\n", i);
		scanf(" %f", &a);
	
		soma+=a;
			
	}


	media=soma/n;
	
	printf("A m�dia das alturas �:%.2f\n", media);
	
}
