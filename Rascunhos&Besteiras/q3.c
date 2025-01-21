/*
	Questão correta.
	Nota da questão: 2,5 pontos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	float kg, alt; //kg: peso, alt: altura.
	int esp; //esp: modalidade esportiva.
	
	printf("Escolha a modalidade esportiva que deseja participar:\n1. Futebol\n2. Volei\n3. Basquete\n4. Atletismo\n");
	printf("Sua escolha foi: ");
	scanf("%d", &esp);
	
	printf("Informe o seu peso (em kg): ");
	scanf("%f", &kg);
	printf("Agora a sua Altura (em metros): ");
	scanf("%f", &alt);
	
	if (esp<1 || esp>4)
	{
		printf("\nA modalidade escolhida eh invalida.\n\n");
		system("PAUSE");
		return 0;
	}
	
	switch(esp)
	{
	
		case 1 :
			if (kg>=75 && kg<=90 && alt>=1.75 && alt<=2.00)
				printf("\nAPROVADO\n\n");
			else
				printf("\nREPROVADO\n\n");
		break;
		case 2 : 
			if (kg>=80 && kg<=100 && alt>=1.85 && alt<=2.05)
				printf("\nAPROVADO\n\n");
			else
				printf("\nREPROVADO\n\n");
		break;
		case 3 :
			if (kg>=85 && kg<=95 && alt>=1.95 && alt<=2.10)
				printf("\nAPROVADO\n\n");
			else
				printf("\nREPROVADO\n\n");
		break;
		case 4 :
			if (kg>=65 && kg<=80 && alt>=1.70 && alt<=1.88)
				printf("\nAPROVADO\n\n");
			else
				printf("\nREPROVADO\n\n");
	}
	
	system("PAUSE");
}