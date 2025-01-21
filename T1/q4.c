#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	int Vlr, a1, a2, a5, a10, a20, a50, n1, n2, n5, n10, n20, n50;
	
	printf("Insira o valor que deseja sacar: ");
	scanf("%d", &Vlr);
	
	if (Vlr >= 50){
	n50 = Vlr/50,
	Vlr = Vlr%50;
	}
	if (Vlr >= 20){
	n20 = Vlr/20,
	Vlr = Vlr%20;
	}
	if (Vlr >= 10){
	n10 = Vlr/10,
	Vlr = Vlr%10;
	}
	if(Vlr >= 5){
	n5 = Vlr/5,
	Vlr = Vlr%5;
	}
	if (Vlr >= 2){
	n2 = Vlr/2,
	Vlr = Vlr%2;
	}
	if (Vlr = 1)
	n1 = Vlr;
	
	printf("Voce recebera:\n %d Notas de R$50\n %d Notas de R$20\n %d Notas de R$ 10\n %d Notas de 5\n %d Notas de 2\n %d Notas de 1\n", n50, n20, n10, n5, n2, n1);
	system("PAUSE");
}