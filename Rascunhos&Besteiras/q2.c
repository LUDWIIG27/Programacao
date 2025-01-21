/*
	Questão correta.
	Nota da questão: 1,5 ponto.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	float La, Lb, Lc;
	
	printf("Insira as seguintes medidas do seu triangulo:\nLado A: ");
	scanf("%f", &La);
	printf("Lado B: ");
	scanf("%f", &Lb);
	printf("Lado C: ");
	scanf("%f", &Lc);
	
	if (La == Lb && La == Lc && Lb == Lc)
		printf("\nEQUILATERO\n\n");
	else
	{
		if (La != Lb && La != Lc && Lb != Lc)
			printf("\nESCALENO\n\n");
		else
			printf("\nISOSCELES\n\n");
	}
	
	system("PAUSE");
}