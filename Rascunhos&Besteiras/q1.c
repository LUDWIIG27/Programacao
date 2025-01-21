/*
	Questão correta.
	Nota da questão: 2,5 pontos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	float bcm, alqt, pdi, impd; //bcm: base de calculo mensal, alqt: aliquota, pdi: parcela a deduzir, impd: imposto devido.
	
	printf("Insira a sua base de calculo mensal: R$");
	scanf("%f", &bcm);
	
	if (bcm <= 1637.11)
	{
		alqt=0,
		pdi=0;
	}
	else
	{
		if (bcm>1637.11 && bcm<2453.51)
		{
			alqt=0.075,
			pdi=122.78;
		}
		else
		{
			if(bcm>2453.50 && bcm<3271.39)
			{
				alqt=0.15,
				pdi=306.80;
			}
			else
			{
				if (bcm>3271.38 && bcm<4087.66)
				{
					alqt=0.225,
					pdi=552.15;
				}
				else
				{
					alqt=0.275,
					pdi=756.53;
				}
			}
		}
	}
	
	impd = (bcm*alqt)-pdi;
	
	printf("\nSeu imposto de renda devido eh de R$%.2f\n\n", impd);
	
	system("PAUSE");
}