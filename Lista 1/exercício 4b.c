#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	/* csx = N° Clientes na Semana x, mcd = Média de Clientes por Dia (no Mês)*/
	int cs1 = 26,
	cs2 = 35,
	cs3 = 38,
	cs4 = 32,
	mcd = (cs1+cs2+cs3+cs4)/20;
	
	printf("media de clientes por dia: %d \n",mcd);
	system("pause");
}