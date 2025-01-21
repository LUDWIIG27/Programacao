/*
	Questão correta.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	float cp1, cp2, rstd;
	int comp, ass;
	
	printf("Selecione qual tipo de componente ira ser usado.\n1. Resistor\n2. Capacitor\n3. Indutor\nSua escolha foi: ");
	scanf("%d", &comp);
	
	if (comp<1 || comp>3)
	{
		printf("\nO componente selecionado eh invalido!\n\n");
		system("PAUSE");
		return 0;
	}
	
	printf("\nAgora selecione qual tipo de associacao sera usada.\n1. Serie\n2. Parealelo\nSua escolha foi: ");
	scanf("%d", &ass);
	
	if (ass<1 || ass>2 )
	{
		printf("\nA associacao escolhida eh invalida!\n\n");
		system("PAUSE");
		return 0;
	}
	
	switch(comp)
	{
		case 1 :
		printf("\nInsira o valor do primeiro resistor em Ohms: ");
		scanf("%f", &cp1);
		printf("\nInsira o valor do segundo resistor em Ohms: ");
		scanf("%f", &cp2);
		
		if (ass==1)
		{
			rstd=cp1+cp2,
			printf("\nO resultado da associacao serie dos resistores informados eh %.2f ohms.\n\n", rstd);
		}
		else
		{
			rstd=cp1*cp2/(cp1+cp2),
			printf("\nO resultado da associacao paralelo dos resistores informados eh %.2f ohms.\n\n", rstd);
		}
		break;
		
		case 2 : 
		printf("\nInsira o valor do primeiro capacitor em uF: ");
		scanf("%f", &cp1);
		printf("\nInsira o valor do segundo capacitor em uF: ");
		scanf("%f", &cp2);
		
			if (ass==1)
		{
			rstd=cp1*cp2/(cp1+cp2),
			printf("\nO resultado da associacao serie dos capacitores informados eh %.2f uF.\n\n", rstd);
		}
		else
		{
			rstd=cp1+cp2,
			printf("\nO resultado da associacao paralelo dos capacitores informados eh %.2f uF.\n\n", rstd);
		}
		break;
		
		case 3 :
		printf("\nInsira o valor do primeiro indutor em mH: ");
		scanf("%f", &cp1);
		printf("\nInsira o valor do segundo indutor em mH: ");
		scanf("%f", &cp2);
		
			if (ass==1)
		{
			rstd=cp1+cp2,
			printf("\nO resultado da associacao serie dos indutores informados eh %.2f mH.\n\n", rstd);
		}
		else
		{
			rstd=cp1*cp2/(cp1+cp2),
			printf("\nO resultado da associacao paralelo dos indutores informados eh %.2f mH.\n\n", rstd);
		}			
	}
	
	system("PAUSE");
}