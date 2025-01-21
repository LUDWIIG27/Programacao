/*
	Ver o comentário no código.
	Questão parcialmente correta.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
 {
	int angA, angB, angC; //estas variaveis guardam as informacoes de cada angulo (A, B e C).
	
	printf("Insira os valores dos angulos do seu traingulo:\nAngulo A: ");
	scanf("%d", &angA);
	
	printf("Angulo B: ");
	scanf("%d", &angB);
	
	printf("Angulo C: ");
	scanf("%d", &angC);
	/* A condição de teste do if a seguir deveria ser substituída por: 
	   (angA+angB+angC!=180) */
	if (angA+angB+angC>=180) //este comando verifica se os angulos inseridos resultam em um triangulo (soma = 180).
	{ 
		printf("\nOs valores angulares inseridos nao sao de um triangulo!\n\n");
	}
	else
	{
		if (angA == 90 || angB == 90 || angC == 90) //este comando verifica se o trinagulo se tarta de um retangulo.
			printf("\nSeu triangulo eh Retangulo!\n\n");
		else 
		{
			if (angA > 90 || angB > 90 || angC > 90) //este verifica se o triagulo se trata de um obtusangulo.
				printf("\nSeu triangulo eh obtusangulo!\n\n");
			else
				printf("\nSeu triangulo eh acutangulo!\n\n");
		}
	}
		
	system("PAUSE");
}