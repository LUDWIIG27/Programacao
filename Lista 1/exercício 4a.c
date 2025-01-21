#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	/* csx = N° Clientes na Semana x, mcs = N° Média de Clientes na Semana*/
	int cs1 = 26,
	cs2 = 35,
	cs3 = 38,
	cs4 = 32,
	mcs = (cs1+cs2+cs3+cs4)/4;
	
	printf("media de clientes por semana: %d \n",mcs);
	system("pause");
}