#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i,n,p1=0,p2=0;
	
	printf("Digite a quantidade de alunos:\n");
	scanf("%i", &n);
	
	fflush(stdin);
	
	float notas[n],soma=0,notaMaior=0,notaMenor=0;
	char nome[n][50];
	
	for(i=0;i<n;i++){
		
		printf("Digite o nome do %iº aluno:\n", i+1);
		gets(nome[i]);
	
		
		printf("Digite a nota do %iº aluno:\n", i+1);
		scanf("%f", &notas[i]);
		fflush(stdin);
		
		soma+=notas[i];
	
		if(notaMaior<notas[i]){
			
			p1=i;
			
			notaMaior=notas[i];
			
		}else if(notaMenor>notas[i]){
			
			p2=i;
			
			notaMenor=notas[i];
			
		}
			
	}
	
	system("cls");
	
	printf("Media das notas é: %.2f\n", soma/n);
	printf("Maior nota é %.2f, do aluno %s\n", notas[p1], nome[p1]);
	printf("Menor nota é %.2f, do aluno %s\n", notas[p2], nome[p2]);
	
	
}
