#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int a,i;
	float f,c,r1,r2;
	
	printf("Qual a conveção você quer fazer?\n1-Fahrenheit para Celsius\n2-Celsius para Fahrenheit\n");
	scanf("%i", &a);
	
	while(a!=1 && a!=2){
	
	printf("Qual a conveção você quer fazer?\n1-Fahrenheit para Celsius\n2-Celsius para Fahrenheit\n");
	scanf("%i", &a);	
		
	}
	
	i=1;
	
	while(a!=2 && i==1){
		
		printf("Qual a temperatura em Fahrenheit?\n");
		scanf(" %f", &f);
		
		r1=(f-32)*0.555555555555555555;
		
		printf("%.2f° Fahrenheit em Celsius é:%.2f°\n", f, r1);
		
		i++;
	}
	
	i=1;
	
	while(a!=1 && i==1){
		
		printf("Qual a temperatura em Celsius?\n");
		scanf(" %f", &c);
		
		r2=(c*1.8)+32;
		
		printf("%.2f° Celsius em Fahrenheit é:%.2f°\n", c, r2);
		
		i++;
		
	}
	
	
	
}
