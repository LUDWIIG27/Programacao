/*
	Questão correta.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	
	int Nvc;
	float num, dnm, rst;
	
do{	
	printf("\nInsira o numerador:\n");
	scanf("%f", &num);
	printf("\nInsira o denominador:\n");
	scanf("%f", &dnm);
	
	while(dnm==0){
		printf("\nValor invalido\n\nTente novamnete:\n");
		scanf("%f", &dnm);
	}
	
	rst = num/dnm;
	printf("\nSeu resultado eh: %.2f\n", rst);
	printf("\nNovo calculo?(1. Sim ; 2.Nao)\n");
	scanf("%i", &Nvc);
	while(Nvc!=1 && Nvc!=2){
		printf("\nValor invalido\n\nTente novamnete:\n");
		scanf("%i", &Nvc);
	}
}while(Nvc==1);

printf("\nPrograma Encerrado.\n\n");
system("PAUSE");
return 0;
}