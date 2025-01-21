#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () 
{
	float kg, alt; //kg: peso do competidor, alt: altura do competidor.
	
	printf("Bem Vindo ao Primeiro Campeonato Mundial de Bolinha de Gude!\n\n");
	printf("Para vermos se voce pode participar comece inserindo sua altura (em metros): ");
	scanf("%f", &alt);
	printf("\nAgora insira seu peso (em kilos): ");
	scanf("%f", &kg);
	
	if ((alt > 1.90 || alt < 1.75) && ( kg > 80 || kg < 70)) //avalia se o competidor sera totalmente recusado.
		printf("\nInfelizmente voce foi totalmente recusado.\n\n");
	else 
	{
		if (alt > 1.90 || alt < 1.75) //avalia se o competidor sera recusado p/ altura.
			printf("\nInfelizfemente voce foi recusado por altura.\n\n");
		else 
		{
			if (kg > 80 || kg < 70) //avalia se o competidor sera recusado p/ peso.
				printf("\nInfelizfemente voce foi recusado por peso.\n\n");
			else 
				printf("\nParabens voce esta apto para participar!\n\n");
		}
	}
	
	system("PAUSE");
}