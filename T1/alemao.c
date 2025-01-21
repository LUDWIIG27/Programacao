#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main () 
{
	float Nvoltas, Nreab, Cpista, Lmin, aux, Gcar;
printf ("QUAL O COMPRIMENTO TOTAL DA PISTA? EM METROS!   ");
	scanf ("%f", &Cpista);
printf ("QUANTAS VOLTAS TEM A PISTA?   ");
	scanf ("%f", &Nvoltas);
printf ("QUANTOS REABASTECIMENTOS SAO PRECISOS PARA O CIRCUITO?   ");
	scanf ("%f", &Nreab);	
printf ("QUANTOS KILOMETROS O CARRO FAZ POR LITRO?   ");
	scanf ("%f", &Gcar);	
aux = Nvoltas/(Nreab+1);
Lmin = (aux*Cpista)/(Gcar*1000);
printf("TERA QUE SER FORNECIDO PELO MENOS %f", Lmin);
}


