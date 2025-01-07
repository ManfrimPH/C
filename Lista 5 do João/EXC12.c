#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome;
	int n1,n2,i;
	float media,mediaTurma,alunosAprovados,alunosReprovados;
	
	mediaTurma=0;
	alunosAprovados=0;
	alunosReprovados=0;
	
	for(i=1;i<=32;i++){
		
		printf("Qual nome do %iº aluno:\n", i);
		scanf("%s", &nome);
		
		do{
			
			printf("Qual a nota da sua 1º prova?(0-10)\n");
			scanf("%i", &n1);
			
		}while(n1<0 || n1>10);
		
		do{
		
			printf("Qual a nota da sua 2º prova?(0-10)\n\n");
			scanf("%i", &n2);
			
		}while(n2<0 || n2>10);
		
		media=(n1+n2)/2;
		
		mediaTurma+=media;
		
		if(media>=6){
			
		alunosAprovados+=1;
			
		}else{
			
			alunosReprovados+=1;
		}
		
		
		
	}
	
	printf("A media da turma é: %.1f\n", mediaTurma/32);
	printf("A porcentagem de alunos aprovados é: %.1f\n", alunosAprovados/32*100);
	printf("A porcentagem de alunos reprovados é: %.1f\n", alunosReprovados/32*100);
	
	
}
