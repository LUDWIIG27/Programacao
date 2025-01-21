#include <stdio.h>
#include <stdlib.h>

int main () {
	float voltas, reabs, mpst, gas, KmL; //mpst = Comprimento da pista, KmL = consumo de combustivel
	
	printf ("Insira o comprimento da pista (em metros): ");
	scanf ("%f", &mpst);
	
	printf ("Insira o total de voltas do GP: ");
	scanf ("%f", &voltas);
	
	printf ("Insira a quantidade de abastecimentos a realizar: ");
	scanf ("%f", &reabs);	
	
	printf ("Insira o consumo de combustivel do carro (em Km/L): ");
	scanf ("%f", &KmL);	

	gas = ((voltas/(reabs+1))*mpst)/(KmL*1000);

	printf("Sera' necessario ao menos %.f L de Gasolina.\n\n", gas);
	system("PAUSE");
}


