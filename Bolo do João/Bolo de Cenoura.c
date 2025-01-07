#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float oleo_p,cenoura_p,ovos_p,acucar_p,farinha_p,fermento_p,chocolate_p,manteiga_p;
    float oleo_c,cenoura_c,ovos_c,acucar_c,farinha_c,fermento_c,chocolate_c,manteiga_c,acucar_c_etapa2;
    float etapa1,etapa2,etapafinal;
    
    printf("Qual � o pre�o do �leo?\n");
    scanf("%f", &oleo_p);
    
    printf("Qual � o pre�o da cenoura?\n");
  	scanf("%f",&cenoura_p);
  	
  	printf("Qual � o pre�o dos ovos?\n");
  	scanf("%f",&ovos_p);
  	
  	printf("Qual � o pre�o do a�ucar?\n");
  	scanf("%f",&acucar_p);
  	
  	printf("Qual � o pre�o da farinha?\n");
  	scanf("%f",&farinha_p);
  	
  	printf("Qual � o pre�o do fermento?\n");
  	scanf("%f",&fermento_p);
  	
  	printf("Qual � o pre�o do chocolate?\n");
 	scanf("%f",&chocolate_p);
 	 
  	printf("Qual � o pre�o da manteiga?\n");
 	scanf("%f",&manteiga_p);
 	
 	
 	oleo_c=(oleo_p/1000)*120;
	cenoura_c=(cenoura_p/7)*3;
	ovos_c=(ovos_p/12)*4;
  	acucar_c=(acucar_p/1000)*320;
  	farinha_c=(farinha_p/1000)*300;
  	fermento_c=(fermento_p/50)*25;
  	manteiga_c=(manteiga_p/500)*12;
  	chocolate_c=(chocolate_p/200)*18;
  	acucar_c_etapa2=(acucar_p/1000)*150;
  
  	etapa1=oleo_c+cenoura_c+ovos_c+acucar_c+farinha_c+fermento_c;
  	etapa2=manteiga_c+chocolate_c+acucar_c_etapa2;
  	etapafinal=etapa1+etapa2;

  	printf("\nTotal da primeira parte:%.2f\n",etapa1);
  	printf("Total da segunda parte:%.2f\n",etapa2);
  	printf("Total de ambas as partes:%.2f\n",etapafinal);
 	 
    
   return 0; 
    
    
}
